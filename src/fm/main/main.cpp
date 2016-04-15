#include <iostream>
#include <iomanip>

#include "../logic/logic.hpp"

int main( int argc, char *argv[] )
 {
  std::cout << "Hello World" << std::endl;

  ::fileM::logic::storage::disc::device_class d;

  ::fileM::logic::storage::disc::manager_class m;

  ::fileM::logic::storage::pure::device_list_type dl;
  m.list( dl, 0, 10 );

  ::fileM::logic::storage::pure::file_list_type fl;
  d.list( fl, ::fileM::logic::storage::pure::attribute_type{}, 0, 10 );

  ::fileM::logic::storage::pure::file_class f{};

  return EXIT_SUCCESS;
 }
