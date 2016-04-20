#include "./name.hpp"

#include "../../../../pure/file.hpp"

using namespace fileM::logic::storage::disc::linux::file::property;

name_class::name_class( object_type * parent_param, string_type const& name_param  )
 : property_type( parent_param )
 {
  this->category_type::type() = "string::file::name";
 }

name_class::~name_class()
 {
  // TODO
 }

bool   name_class::process( string_type const& name_param )
 {
  m_name = name_param;

  typedef ::fileM::logic::storage::pure::file_class file_type;

  auto parent_file = dynamic_cast<file_type*>( m_parent );
  if( nullptr == parent_file )
   {
    return false;
   }
  parent_file->refresh();
  return true;
 }


void
name_class::refresh()
 {
  // do nothing
  return;
 }
