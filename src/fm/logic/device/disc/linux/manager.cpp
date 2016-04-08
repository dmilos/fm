#include "../manager.hpp"

#include "../disc.hpp"

using namespace fileM::logic::device::disc;

manager_class::manager_class()
 {
  // TODO
 }

manager_class::~manager_class()
 {
  //TODO
 }

bool      manager_class::refresh()const
 {
  //TODO
  return false;
 }

manager_class::size_type      manager_class::size()const
 {
  //TODO
  return 0;
 }

manager_class::size_type
manager_class::list( device_list_type & list, size_type const& begin, size_type const& end )const
 {
  typedef ::fileM::logic::device::pure::manager_dumb_ptr_type manager_dumb_ptr_type;

  typedef ::fileM::logic::device::disc::device_class      device_type;
  typedef ::fileM::logic::device::disc::manager_class    manager_type;

  //auto a = ;

  for ( int i=0; i< 10; i++ )
   {
    list.push_back( new device_type{ manager_dumb_ptr_type{ const_cast<manager_class*>(this) } } );
    //list.back().set( "name",   "asdasda" );
    //list.back().set( "folder", "asdasda" );
    //list.back().set( "mode",   "asdasda" );
    //list.back().set( "gid",    "asdasda" );
    //list.back().set( "size",   "asdasda" );
    //list.back().set( "noexec", "asdasda" );
    //list.back().set( "nosuid", "asdasda" );
    //list.back().set( "nodev",  "asdasda" );
   }

  return list.size();
 }
