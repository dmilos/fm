#include "./folder.hpp"

using namespace fileM::logic::storage::disc::linux::device::property;

folder_class::folder_class( object_type * parent_param )
 : property_type( parent_param, "string::folder::name" )
 {
 }

folder_class::~folder_class()
 {
  // TODO
 }

folder_class::size_type
folder_class::size( )const
 {
  // TODO
  return 0;
 }

bool
folder_class::set( string_type const& name )const
 {
  // TODO
  return false;
 }

folder_class::size_type
folder_class::get( string_type const& name, string_type & value )
 {
  // TODO
  return 0;
 }

void
folder_class::refresh()
 {
  // TODO
  return;
 }
