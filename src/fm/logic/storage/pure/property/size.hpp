#ifndef fm_logic_storage_pure_property_size
#define fm_logic_storage_pure_property_size

// ::fileM::logic::storage::pure::property::size_class

#include "../../../../type/size.hpp"

#include "../property.hpp"


namespace fileM
 {
  namespace logic
   {
    namespace storage
     {
      namespace pure
       {
        namespace property
         {

              class size_class
               : public ::fileM::logic::storage::pure::property_class
               , public ::reflection::content::guarded::simple_class< ::fileM::type::size_type, ::fileM::type::size_type const&, ::fileM::type::size_type const&, bool>::typedef_type
                {
                 public:
                   typedef ::fileM::logic::storage::pure::property_class property_type;

                   typedef ::fileM::type::size_type size_type;

                   typedef ::reflection::content::guarded::simple_class< size_type, size_type const&, size_type const&, bool>::typedef_type  guarded_type;

                   size_class( size_type const& size_param ):guarded_type( size_param ){ }

                  ~size_class(){}

                  virtual void               refresh(){ }
                };

         }
       }
     }
   }
 }

#endif
