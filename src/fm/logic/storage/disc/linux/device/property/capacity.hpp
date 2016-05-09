#ifndef fm_logic_storage_disc_linux_device_property_capacity
#define fm_logic_storage_disc_linux_device_property_capacity


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
        namespace linux
         {
          namespace device
           {
            namespace property
             {

              class capacity_class
               : public ::fileM::logic::storage::pure::property_class
               , public ::reflection::content::inspect::pure_class< ::fileM::type::size_type, ::fileM::type::size_type const& >
                {
                 public:
                   typedef ::fileM::logic::storage::pure::property_class property_type;

                   typedef ::fileM::type::size_type   size_type;
                   typedef ::fileM::type::string_type string_type;

                   typedef ::type::category::pure_class<string_type>  category_type;

                   capacity_class( object_type * parent_param );

                  ~capacity_class();

                 public:
                    size_type const& present()const{ return m_capacity; }
                 public:
                   virtual void               refresh();
                 private:
                   size_type m_capacity;
                };

             }
           }
         }
       }
     }
   }
 }

#endif 