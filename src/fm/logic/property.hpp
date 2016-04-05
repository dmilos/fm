#ifndef fm_logic_property
#define fm_logic_property


#include "reflection/reflection.hpp"

#include "../type/size.hpp"
#include "../type/string.hpp"

namespace fileM
 {
  namespace logic
   {

    class property
    : public ::reflection::object::structure_class
     {
      public:

       typedef ::fileM::type::string_type string_type;
       typedef ::fileM::type::size_type size_type;

       typedef ::reflection::object::structure_class object_type;
       typedef ::reflection::object::structure_class* object_ptr_type;

       property( object_type * parent_param )
        :m_parent( parent_param )
        {
         //insert( "set",     item_type( ::reflection::property::function::member( this, &fileM::logic::property::set     ) ) );
         //insert( "get",     item_type( ::reflection::property::function::member( this, &fileM::logic::property::get     ) ) );
         //insert( "size",    item_type( ::reflection::property::function::member( this, &fileM::logic::property::size    ) ) );
         //insert( "refresh", item_type( ::reflection::property::function::member( this, &fileM::logic::property::refresh ) ) );
        }

       ~property();

       virtual size_type   const& size( )const=0;
       virtual bool               set( string_type const& name )const=0;
       // must obey value.capacity()
       virtual size_type          get( string_type const& name, string_type & value )=0;
       virtual void               refresh()=0;

      public:
        object_ptr_type parent( void ){ return m_parent; }
      private:
        object_ptr_type m_parent;
     };

     typedef std::map< ::fileM::type::string_type, ::fileM::logic::property > attribute_type;

   }
 }

#endif
