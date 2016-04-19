#include "./name.hpp"

using namespace fileM::logic::storage::disc::linux::device::property;

name_class::name_class( object_type * parent_param )
 : property_type( parent_param )
 {
   //TODO this->member_type::type() = "string::file::name";
 }

name_class::~name_class()
 {
  // TODO
 }

name_class::size_type
name_class::size( )const
 {
  // TODO
  return 0;
 }

bool
name_class::set( string_type const& name )const
 {
  // TODO
  return false;
 }

name_class::size_type
name_class::get( string_type const& name, string_type & value )
 {
  // TODO
  return 0;
 }

void
name_class::refresh()
 {
  // TODO
  return;
 }
