#ifndef fm_logic_storage_disc_windows_device_property_size
#define fm_logic_storage_disc_windows_device_property_size


#include "../../../../pure/property.hpp"

#include "../../../../../../type/size.hpp"


namespace fileM
 {
  namespace logic
   {
    namespace storage
     {
      namespace disc
       {
        namespace windows
         {
          namespace device
           {
            namespace property
             {

              class size_class
               : public ::fileM::logic::storage::pure::property_class
               , public ::reflection::content::inspect::pure_class< ::fileM::type::size_type, ::fileM::type::size_type const& >
                {
                 public:
                   typedef ::fileM::logic::storage::pure::property_class property_type;

                   typedef ::fileM::type::size_type   size_type;
                   typedef ::fileM::type::string_type string_type;

                   typedef ::type::category::pure_class<string_type>  category_type;

                   size_class( object_type * parent_param );

                  ~size_class();

                 public:
                    size_type const& present()const{ return m_size; }
                 public:
                   virtual void               refresh();
                 private:
                   size_type m_size;
                };

             }
           }
         }
       }
     }
   }
 }

#endif
