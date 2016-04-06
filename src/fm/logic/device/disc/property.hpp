#ifndef fm_logic_device_disc_property
#define fm_logic_device_disc_property


#include "../../property.hpp"


namespace fileM
 {
  namespace logic
   {
    namespace device
     {
      namespace disc
       {

        class property_class
         : public ::fileM::logic::property_class
          {
           public:

            property_class( object_type * parent_param )
             : ::fileM::logic::property_class( parent_param )
             {
              //insert( "set",     item_type( ::reflection::property::function::member( this, &fileM::logic::property::set     ) ) );
              //insert( "get",     item_type( ::reflection::property::function::member( this, &fileM::logic::property::get     ) ) );
              //insert( "size",    item_type( ::reflection::property::function::member( this, &fileM::logic::property::size    ) ) );
              //insert( "refresh", item_type( ::reflection::property::function::member( this, &fileM::logic::property::refresh ) ) );
             }

            ~property_class();

            virtual size_type          size( )const;
            virtual bool               set( string_type const& name )const;
            // must obey value.capacity()
            virtual size_type          get( string_type const& name, string_type & value );
            virtual void               refresh();

          };

       }
     }
   }
 }

#endif
