#ifndef fm_logic_storage_disc_linux_device_property_folder
#define fm_logic_storage_disc_linux_device_property_folder


#include "../../../../pure/property.hpp"


namespace fileM
 {
  namespace logic
   {
    namespace storage
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
               : public ::fileM::logic::storage::pure::property_class
                {
                 public:
                   typedef ::fileM::logic::storage::pure::property_class property_type;

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
