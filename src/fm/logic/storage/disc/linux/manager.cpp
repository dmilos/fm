//#include <filesystem>

#include "../manager.hpp"

#include "../disc.hpp"

using namespace fileM::logic::storage::disc;

manager_class::manager_class()
 {
  //insert(  "name",   item_type( ::memory::pointer::make(   name_class{  this,  name_param } ) ) );
  //insert(  "folder", item_type( ::memory::pointer::make( folder_class{  this,  "/home" } ) ) );
  //insert(  "size",   item_type( ::memory::pointer::make(   size_class{  this } ) ) );
 }

manager_class::~manager_class()
 {
  //TODO
 }

bool      manager_class::refresh()
 {
  typedef pure::manager_dumb_ptr_type manager_dumb_ptr_type;

  for( auto & device : m_list )
   {
    device->refresh();
    if( false == device->status() )
     {
      //device.release()
     }
   }

  m_list.emplace_back( pure::device_pointer_type{ new device_class{ pure::manager_dumb_ptr_type{ this }, "/dev/null" } } );

  for ( int i=0; i< 10; i++ )
   {
   }

  return false;
 }

manager_class::size_type
manager_class::size()const
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


