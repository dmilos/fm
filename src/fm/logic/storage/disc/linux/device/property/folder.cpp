#include "./folder.hpp"

using namespace fileM::logic::storage::disc::linux::device::property;

folder_class::folder_class( object_type * parent_param, std::string const& path_param )
 : property_type( parent_param )
 , m_path( path_param )
 {
  this->category_type::type() = "string::folder::name";
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
folder_class::set( data_type const& name )
 {
  // TODO
  return false;
 }

folder_class::size_type
folder_class::get( data_type & value )
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
