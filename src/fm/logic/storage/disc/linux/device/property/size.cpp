#include "./size.hpp"

using namespace fileM::logic::storage::disc::linux::device::property;

size_class::size_class( object_type * parent_param )
 : property_type( parent_param, "size::size" )
 {
 }

size_class::~size_class()
 {
  // TODO
 }

size_class::size_type
size_class::size( )const
 {
  // TODO
  return 0;
 }

bool
size_class::set( string_type const& name )const
 {
  // TODO
  return false;
 }

size_class::size_type
size_class::get( string_type const& name, string_type & value )
 {
  // TODO
  return 0;
 }

void
size_class::refresh()
 {
  // TODO
  return;
 }
