
#include "../file.hpp"

#include "./file/property/property.hpp"


using namespace fileM::logic::storage::pure;

file_class::file_class( device_type *device_param )
 : m_device( device_param )
 {
  //insert( "name",   ::fileM::logic::storage::disc::linux::device::property::name_class{ this, "/dev/null" } );
  //insert( "size",   ::fileM::logic::storage::disc::linux::device::property::size_class{ this    } );
 }

file_class::~file_class()
 {

 }

/*
file_class::device_ptr_type file_class::storage( void )
 {
  return m_device;
 }*/

/*
listener_type const& file_class::listener()const
 {
  return m_listener;
 }
*/

/*
void                 file_class::listener( listener_type const& listener_param )
 {
  m_listener = listener_param;
 }
*/
