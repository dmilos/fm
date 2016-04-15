#include "../disc.hpp"

#include "./device/property/property.hpp"


using namespace ::fileM::logic::storage::disc;

device_class::device_class( manager_dumb_ptr_type const& manager_param )
 : pure_type( manager_param )
 {

    //insert( "name",   ::fileM::logic::storage::disc::linux::device::property::name_class{    this, "/dev/null" } );
    //insert( "folder", ::fileM::logic::storage::disc::linux::device::property::folder_class{  this,  "/" } );
    //insert( "size",   ::fileM::logic::storage::disc::linux::device::property::size_class{    this    } );

    //insert( "mode",   disc::proprty::storage::mode{    this } );
    //insert( "gid",    disc::proprty::storage::gid{     this } );
    //insert( "size",   disc::proprty::storage::size{    this } );
    //insert( "noexec", disc::proprty::storage::noexec{  this } );
    //insert( "nosuid", disc::proprty::storage::nosuid{  this } );
    //insert( "nodev",  disc::proprty::storage::nodev{   this } );
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
device_class::list( file_list_type & list, attribute_type const& filter_param, size_type const& begin, size_type const& end )
 {
  for( int i=0; i< 10; i++ )
   {
    list.push_back( ::fileM::logic::storage::pure::file_class{ this } );
    //list.back().set( "path", "/home/asd/asd.txt" );
   }

  return 0;
 }

