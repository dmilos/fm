#include "./size.hpp"

using namespace fileM::logic::storage::disc::linux::device::property;

size_class::size_class( object_type * parent_param )
 : property_type( parent_param )
 {
  this->category_type::type() = "size::device::size";
 }

size_class::~size_class()
 {
  // TODO
 }

void
size_class::refresh()
 {
  // TODO
  return;
 }
