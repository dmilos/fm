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

void
folder_class::refresh()
 {
  // TODO
  return;
 }
