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

void
name_class::refresh()
 {
  // TODO
  return;
 }
