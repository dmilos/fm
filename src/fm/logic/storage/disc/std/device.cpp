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

#include <iostream>
#include <iomanip>

device_class::size_type
device_class::list( file_list_type & list, filter_type const& filter_param, size_type const& begin_param, size_type const& size_param )
 {
  auto folder_iter = filter_param.find( "folder" ); if( folder_iter == filter_param.end() ) { return 0; }
  string_type const& folder = ::reflection::property::inspect::present< string_type const& >( dynamic_cast< ::reflection::property::pure_class const&> ( *(folder_iter->second) ) );

  auto name_iter = filter_param.find( "name" ); if( name_iter == filter_param.end() ) { return 0; }
  string_type const& name   = ::reflection::property::inspect::present< string_type const& >( dynamic_cast< ::reflection::property::pure_class const&> ( *(name_iter->second) ) );

  std::tr2::sys::directory_iterator begin_of_folder{ std::tr2::sys::path{ folder} };
  std::tr2::sys::directory_iterator end_of_folder;

  // TODO begin_of_folder += begin_param;

  size_type size = 0;
  for(
         auto item  = begin_of_folder;
            ( item !=   end_of_folder ) &&  ( size < size_param );
          ++item  )
   {
    auto const& file_name = item->path().filename().string();
    // TODO if( false == match( filter_param ) ) 
    // TODO  {
    // TODO   continue;
    // TODO  }
    size++;

    list.push_back( file_pointer_type{ new ::fileM::logic::storage::disc::file_class{ this, file_name } } ); 
   }

  return 0;
 }

