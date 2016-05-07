
#include <fstream>

#include "./size.hpp"

#include "../../../../pure/file.hpp"

using namespace fileM::logic::storage::disc::windows::file::property;

size_class::size_class( object_type * parent_param, size_type const& size_param )
 : property_type( parent_param )
 {
  this->category_type::type() = "size::file::size";
  m_size = size_param;
 }

size_class::~size_class()
 {
  // TODO
 }

void
size_class::refresh()
 {
  typedef ::fileM::logic::storage::pure::file_class file_type;

  auto parent_file = dynamic_cast<file_type*>( m_parent );
  if( nullptr == parent_file )
   {
    return;
   }

  string_type const& filename = ::reflection::property::inspect::present< string_type const&>( parent_file->get( "name" ) );

  std::ifstream in( filename, std::ifstream::ate | std::ifstream::binary );
  m_size = in.tellg();
  return;
 }
