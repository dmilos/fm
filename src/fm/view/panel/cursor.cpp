
#include "./cursor.hpp"

using namespace fileM::view::panel;


bool       cursor::up( void )
 {
  m_position --; // test with zero
  return true;
 }

bool       cursor::down( void )
 {
  m_position ++;
  return false;
 }
size_t     cursor::position()
 {
  return m_position;
 }

//size_t     remove(size_t begin, size_t end );

bool       cursor::process( size_type const& position_param )
 {
  m_position =  position_param	
  return true;
 }