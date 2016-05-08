#include "./cursor.hpp"

using namespace fileM::view::panel;


cursor_class::cursor_class()
 {

 }

cursor_class::~cursor_class()
 {

 }

bool       cursor_class::up( void )
 {
  if( 0 == m_position )
   {
    return false;
   }
  m_position --;
  return true;
 }

bool       cursor_class::down( void )
 {
  if( m_max == m_position + 1 )
   {
    return false;
   }

  m_position ++;
  return true;
 }
size_t     cursor_class::position()
 {
  return m_position;
 }

//size_t     remove(size_t begin, size_t end );

bool       cursor_class::process( size_type const& position_param )
 {
  m_position = position_param;
  return true;
 }

void   cursor_class::refresh()
 {

 }
