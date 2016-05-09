#include "./capacity.hpp"

using namespace fileM::logic::storage::disc::windows::device::property;

capacity_class::capacity_class( object_type * parent_param )
 : property_type( parent_param )
 {
  this->category_type::type() = "size::device::capacity";
 }

capacity_class::~capacity_class()
 {
  // TODO
 }


void
capacity_class::refresh()
 {
  // TODO
  return;
 } 