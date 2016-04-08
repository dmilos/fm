#ifndef fm_logic_device_pure_property
#define fm_logic_device_pure_property
// ::fileM::logic::device::pure::property_class

#include "reflection/reflection.hpp"

#include "../../../type/size.hpp"
#include "../../../type/string.hpp"
#include "../../../type/data.hpp"

namespace fileM
 {
  namespace logic
   {
    namespace device
     {
      namespace pure
       {

        class property_class
         : public ::reflection::object::structure_class
         {
          public:

           typedef ::fileM::type::data_type data_type;
           typedef ::fileM::type::size_type size_type;

           typedef ::reflection::object::structure_class  object_type;
           typedef ::reflection::object::structure_class* object_ptr_type;

           typedef ::fileM::logic::device::pure::property_class this_type;

           explicit property_class( object_type * parent_param = nullptr )
            :m_parent( parent_param )
            {
             //insert( "set",     item_type( ::reflection::property::function::member( this, &this_type::set     ) ) );
             //insert( "get",     item_type( ::reflection::property::function::member( this, &this_type::get     ) ) );
             //insert( "size",    item_type( ::reflection::property::function::member( this, &this_type::size    ) ) );
             //insert( "refresh", item_type( ::reflection::property::function::member( this, &this_type::refresh ) ) );
            }

           ~property_class();

           virtual size_type          size( )const=0;

           // must obey value.capacity()
           virtual size_type          get( data_type & value )const=0;

           virtual bool               set( data_type const& data )=0;

           virtual bool               insert(  data_type const& value,  size_type const& position )=0;
           virtual bool               replace( data_type const& value,  size_type const& position )=0;
           virtual bool               erase(   size_type const& begin, size_type const& end )=0;

           virtual void               refresh()=0;

          public:
            object_ptr_type parent( void ){ return m_parent; }
          protected:
            object_ptr_type m_parent;
         };

        typedef ::fileM::logic::device::pure::property_class pointer_type;
        typedef std::map< ::fileM::type::string_type, ::fileM::logic::device::pure::property_class * > attribute_type;

       }
     }
   }
 }

#endif
