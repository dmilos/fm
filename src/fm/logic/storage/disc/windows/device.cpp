#include <filesystem>

#include "../device.hpp"

#include "./device/property/property.hpp"

#include "../file.hpp"

using namespace ::fileM::logic::storage::disc;

device_class::device_class( manager_dumb_ptr_type const& manager_param, string_type const& name_param )
 {
  // TODO
 }

device_class::~device_class()
 {
  // TODO
 }

bool device_class::connect()
 {
 // TOODO
  return false;
 }

void device_class::disconnect()
 {
 // TOODO
 return;
 }

bool device_class::status()const
 {
 // TOODO
  return false;
 }


bool device_class::refresh()const
 {
 // TOODO
  return false;
 }

device_class::size_type
device_class::size()
 {
 // TOODO
  return 0;
 }

#include <windows.h>
#include <tchar.h>
#include <stdio.h>
#include <strsafe.h>
#pragma comment(lib, "User32.lib")

device_class::size_type
device_class::list( file_list_type & list, attribute_type const& filter_param, size_type const& begin_param, size_type const& size_param )
 {
  auto folder_iter = filter_param.find( "folder" ); if( folder_iter == filter_param.end() ) { return 0; }
  string_type const& folder = ::reflection::property::inspect::present< string_type const& >( dynamic_cast< ::reflection::property::pure_class const&> ( *(folder_iter->second) ) );

  auto name_iter = filter_param.find( "name" ); if( name_iter == filter_param.end() ) { return 0; }
  string_type const& name   = ::reflection::property::inspect::present< string_type const& >( dynamic_cast< ::reflection::property::pure_class const&> ( *(name_iter->second) ) );

  string_type file_pattern = folder + "\\" + name;

  WIN32_FIND_DATA ffd;
  HANDLE hFind = FindFirstFile( file_pattern.c_str(), &ffd );

  if (INVALID_HANDLE_VALUE == hFind )
   {
    return 0;
   }

  size_type index = 0;
  size_type size  = 0;

  while( true )
   {

    //auto const& file_name = TODO;
    //// TODO if( false == match( filter_param ) )
    //// TODO  {
    //// TODO   goto label_continue;
    //// TODO  }

    ++index;
    if( index <= begin_param )
     {
      goto label_continue;
     }

    ++size;
    list.push_back( file_pointer_type{ new ::fileM::logic::storage::disc::file_class{ this,  ffd.cFileName } } );

    if( size_param <= size )
     {
      break;
     }

    label_continue:
     if( FindNextFile( hFind, &ffd ) == 0 )
      {
       break;
      }
   }

  FindClose( hFind );
  return index;
 }
