#include <iostream>
#include <iomanip>

#include "../logic/logic.hpp"

#include "../view/panel/panel.hpp"

#include "type/ptr/make.hpp"

void p()
 {
  ::fileM::view::panel_class panel;
   //panel.m_
 }


int main( int argc, char *argv[] )
 {
  std::cout << "Hello World" << std::endl;

  ::fileM::logic::storage::disc::device_class d;

  ::fileM::logic::storage::disc::manager_class m;

  ::fileM::logic::storage::pure::device_list_type dl;
  m.list( dl, 0, 10 );

  ::fileM::logic::storage::pure::file_list_type list;

  ::fileM::logic::storage::pure::filter_class filter;

//filter.insert( "folder", ::reflection::object::structure_class<>::item_type( ::memory::pointer::make( ::reflection::property::inspect::simple( ::fileM::type::string_type("/home/dex") ) ) ) );
  filter.insert( "folder", ::reflection::object::structure_class<>::item_type( ::memory::pointer::make( ::reflection::property::inspect::simple( ::fileM::type::string_type("c:\\work") ) ) ) );

  filter.insert( "name", ::reflection::object::structure_class<>::item_type( ::memory::pointer::make( ::reflection::property::inspect::simple( ::fileM::type::string_type("*.*") ) ) ) );

  d.list( list, filter, 2, 5 );

  std::cout << "----" << std::endl;
  for( auto const& file: list )
   {
     std::cout << ::reflection::property::inspect::present<std::string const&>( file->get("name") ) << std::endl;
   }
  std::cout << "----" << std::endl;

  std::cin.get();
  return EXIT_SUCCESS;
 }
