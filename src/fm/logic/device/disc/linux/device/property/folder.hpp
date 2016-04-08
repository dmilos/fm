#ifndef fm_logic_device_disc_linux_device_property_folder
#define fm_logic_device_disc_linux_device_property_folder


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
          namespace device
           {
            namespace property
             {

              class folder_class
               : public ::fileM::logic::device::pure::property_classs
                {
                 public:

                   folder_class( object_type * parent_param );

                  ~folder_class();

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