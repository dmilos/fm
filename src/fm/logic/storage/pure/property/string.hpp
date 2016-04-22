#ifndef fm_logic_storage_pure_property_string
#define fm_logic_storage_pure_property_string

// ::fileM::logic::storage::pure::property::string_class

#include "../../../../type/string.hpp"

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

              class string_class
               : public ::fileM::logic::storage::pure::property_class
               , public ::reflection::content::guarded::simple_class< ::fileM::type::string_type, ::fileM::type::string_type const&, ::fileM::type::string_type const&, bool>::typedef_type
                {
                 public:
                   typedef ::fileM::logic::storage::pure::property_class property_type;

                   typedef ::fileM::type::string_type string_type;

                   typedef ::reflection::content::guarded::simple_class< std::string, std::string const&,std::string const&, bool>::typedef_type  guarded_type;

                   string_class( string_type const& string_param )
                    :guarded_type( string_param )
                    {
                     this->storage( string_param );
                    }

                  ~string_class(){}
                  virtual void               refresh(){ }
                };

         }
       }
     }
   }
 }

#endif
