#ifndef fm_logic_device_disc_property_size
#define fm_logic_device_disc_property_size


#include "../pure/property.hpp"


namespace fileM
 {
  namespace logic
   {
    namespace device
     {
      namespace disc
       {
        namespace propery
         {

          class size_class
           : public ::fileM::logic::device::pure::property_classs
            {
             public:

               size_class( object_type * parent_param );

              ~size_class();

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
 }

#endif