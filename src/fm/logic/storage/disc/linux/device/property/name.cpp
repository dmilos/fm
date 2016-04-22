#include "./name.hpp"

using namespace fileM::logic::storage::disc::linux::device::property;

name_class::name_class( object_type * parent_param, string_type const& name_param  )
 : property_type( parent_param )
 {
  this->category_type::type() = "string::device::name";
 }

name_class::~name_class()
 {
  // TODO
 }

bool
name_class::process( string_type const& name_param )
 {
  m_name = name_param;
  return true;
 }

void
name_class::refresh()
 {
  // TODO
  return;
 }


