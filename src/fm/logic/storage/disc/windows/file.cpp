
#include "../file.hpp"

#include "./file/property/property.hpp"

#include "type/ptr/make.hpp"


using namespace fileM::logic::storage::disc;

file_class::file_class( device_type *device_param, string_type const& name_param  )
 : pure_type( device_param )
 {
  using namespace ::fileM::logic::storage::disc::windows::file::property;

  insert(  "name",   item_type( ::memory::pointer::make(   name_class{  this, name_param } ) ) );
  insert(  "size",   item_type( ::memory::pointer::make(   size_class{  this } ) ) );
 }

file_class::~file_class()
 {
 }


void file_class::refresh()
 {
  dynamic_cast< property_type & >( get("name" ) ).refresh();
  dynamic_cast< property_type & >( get("size" ) ).refresh();
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
