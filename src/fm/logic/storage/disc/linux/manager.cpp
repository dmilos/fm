#include "../manager.hpp"

#include "../disc.hpp"

using namespace fileM::logic::storage::disc;

manager_class::manager_class()
 {
  // insert( "", item_type( ) )
 }

manager_class::~manager_class()
 {
  //TODO
 }

bool      manager_class::refresh()
 {
  typedef ::fileM::logic::storage::pure::manager_dumb_ptr_type manager_dumb_ptr_type;
  for ( int i=0; i< 10; i++ )
   {
    //m_list.emplace_back( new device_type{ manager_dumb_ptr_type{ const_cast<manager_class*>(this) } } );
    //list.back().set( "name",   "asdasda" );
    //list.back().set( "folder", "asdasda" );
    //list.back().set( "mode",   "asdasda" );
    //list.back().set( "gid",    "asdasda" );
    //list.back().set( "size",   "asdasda" );
    //list.back().set( "noexec", "asdasda" );
    //list.back().set( "nosuid", "asdasda" );
    //list.back().set( "nodev",  "asdasda" );
   }

  return false;
 }

manager_class::size_type      manager_class::size()const
 {
  //TODO
  return 0;
 }

manager_class::size_type
manager_class::list( device_list_type & list, size_type const& begin_param, size_type const& end_param )const
 {


  typedef ::fileM::logic::storage::disc::device_class      device_type;
  typedef ::fileM::logic::storage::disc::manager_class    manager_type;

  for ( int index = begin_param; ( index < end_param ) && ( end_param < m_list.size() ); index++ )
   {
    list.push_back( m_list[ index ]);
   }

  return list.size();
 }


