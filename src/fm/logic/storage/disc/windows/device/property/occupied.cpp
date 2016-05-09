#include "./occupied.hpp"

using namespace fileM::logic::storage::disc::windows::device::property;

occupied_class::occupied_class( object_type * parent_param )
 : property_type( parent_param )
 {
  this->category_type::type() = "size::device::occupied";
 }

occupied_class::~occupied_class()
 {
  // TODO
 }


void
occupied_class::refresh()
 {
  // TODO
  return;
 } 