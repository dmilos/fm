#ifndef fm_logic_device_disc_linux_file_property_name
#define fm_logic_device_disc_linux_file_property_name


#include "../pure/property.hpp"


namespace fileM
 {
  namespace logic
   {
    namespace device
     {
      namespace disc
       {
        namespace linux
         {
          namespace file
           {
            namespace property
             {

            class name_class
             : public ::fileM::logic::device::pure::property_classs
              {
               public:

                 property_class( object_type * parent_param );

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
     }
   }
 }

#endif