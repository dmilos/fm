#ifndef fm_logic_device_null_property
#define fm_logic_device_null_property


#include "../pure/property.hpp"


namespace fileM
 {
  namespace logic
   {
    namespace device
     {
      namespace null
       {

        class property_class
        : public ::reflection::object::structure_class
         {
          public:

           typedef ::fileM::type::data_type data_type;
           typedef ::fileM::type::size_type size_type;

           typedef ::reflection::object::structure_class object_type;
           typedef ::reflection::object::structure_class* object_ptr_type;

           property_class( object_type * parent_param )
            :m_parent( parent_param )
            {
             //insert( "set",     item_type( ::reflection::property::function::member( this, &fileM::logic::property::set     ) ) );
             //insert( "get",     item_type( ::reflection::property::function::member( this, &fileM::logic::property::get     ) ) );
             //insert( "size",    item_type( ::reflection::property::function::member( this, &fileM::logic::property::size    ) ) );
             //insert( "refresh", item_type( ::reflection::property::function::member( this, &fileM::logic::property::refresh ) ) );
            }

           ~property_class();

           virtual size_type          size( )const{ return 0; }

           virtual bool               set( data_type const& data )const{ return false; }

           virtual bool               insert(  data_type const& value,  size_type const& position )const{ return false; }
           virtual bool               replace( data_type const& value,  size_type const& position )const{ return false; }
           virtual bool               erase(   size_type const& begin, size_type const& end )const{ return false; }

           // must obey value.capacity()
           virtual size_type          get( data_type & value ){ return 0; }
           virtual void               refresh(){ return ; }

          public:
            object_ptr_type parent( void ){ return m_parent; }
          private:
            object_ptr_type m_parent;
         };

       }
     }
   }
 }

#endif
