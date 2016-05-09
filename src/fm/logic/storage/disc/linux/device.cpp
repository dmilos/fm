
#include <dirent.h>


#include "../device.hpp"

#include "./device/property/property.hpp"

#include "type/ptr/make.hpp"

#include "../file.hpp"

using namespace ::fileM::logic::storage::disc;

device_class::device_class( manager_dumb_ptr_type const& manager_param, string_type const& name_param )
 : pure_type( manager_param )
 {
  using namespace ::fileM::logic::storage::disc::linux::device::property;

  insert(  "name",   item_type( ::memory::pointer::make(   name_class{  this,  name_param } ) ) );
  insert(  "folder", item_type( ::memory::pointer::make( folder_class{  this,  "/home" } ) ) );
  insert(  "size",   item_type( ::memory::pointer::make(   size_class{  this } ) ) );

    //insert( "mode",   mode{    this } );
    //insert( "gid",    gid{     this } );
    //insert( "size",   size{    this } );
    //insert( "noexec", noexec{  this } );
    //insert( "nosuid", nosuid{  this } );
    //insert( "nodev",  nodev{   this } );
 }

device_class::~device_class()
 {
  // TODO
 }

bool device_class::connect()
 {
 // TODO
  return false;
 }

void device_class::disconnect()
 {
 // TODO
  return;
 }

bool device_class::status()const
 {
 // TODO
  return false;
 }


bool device_class::refresh()const
 {
 // TODO
  return false;
 }

device_class::size_type
device_class::size()
 {
 // TODO
  return 0;
 }


device_class::size_type
device_class::list
 (
   file_list_type & list
  ,filter_type const& filter_param
  ,size_type const& begin
  ,size_type const& size
 )
 {
  auto folder_iter = filter_param.find( "folder" ); if( folder_iter == filter_param.end() ) { return 0; }
  string_type const& folder = ::reflection::property::inspect::present< string_type const& >( dynamic_cast< ::reflection::property::pure_class const&> ( *(folder_iter->second) ) );

  auto name_iter = filter_param.find( "name" ); if( name_iter == filter_param.end() ) { return 0; }
  string_type const& name   = ::reflection::property::inspect::present< string_type const& >( dynamic_cast< ::reflection::property::pure_class const&> ( *(name_iter->second) ) );

  std::uint32_t index = 0;

  DIR *directory = opendir( folder.c_str() );
  if( directory == NULL)
   {
    return 0;
   }

  struct dirent *entry;
  while( NULL !=( entry = readdir( directory ) ) )
   {
    // if( false == match( name ) )
    // {
    //  continue;
    // }

    ++index;

    list.push_back( file_pointer_type{ new ::fileM::logic::storage::disc::file_class{ this, entry->d_name } } );

    if( size <= index )
     {
      break;
     }

   }

  return list.size();
 }
