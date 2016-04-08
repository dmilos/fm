#include <iostream>
#include <iomanip>

#include "../logic/logic.hpp"

int main( int argc, char *argv[] )
 {
  std::cout << "Hello World" << std::endl;

  ::fileM::logic::device::disc::device_class d;

  ::fileM::logic::device::disc::manager_class m;

  ::fileM::logic::device::pure::device_list_type dl;
  m.list( dl, 0, 10 );

  ::fileM::logic::device::pure::file_list_type fl;
  d.list( fl, ::fileM::logic::device::pure::attribute_type(), 0, 10 );

  ::fileM::logic::device::pure::file_class f{};

  return EXIT_SUCCESS;
 }
