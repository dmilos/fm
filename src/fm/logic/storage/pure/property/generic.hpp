#ifndef fm_logic_storage_pure_property_generic
#define fm_logic_storage_pure_property_generic

// ::fileM::logic::storage::pure::property::generic_class<type_name >


#include "../property.hpp"

#include "../../../../type/string.hpp"
#include "../../../../type/color.hpp"
#include "../../../../type/size.hpp"

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

          template< typename type_name >
           class generic_class
            : public ::fileM::logic::storage::pure::property_class
            , public ::reflection::content::guarded::simple_struct< type_name, type_name const&, type_name const&, bool>::typedef_type
             {
              public:
                typedef ::fileM::logic::storage::pure::property_class property_type;
                typedef ::reflection::property::_internal::carrier_class<type_name> carrier_type;
              //typedef ::reflection::content::guarded::simple_class< type_name, type_name const&, type_name const&, bool>::typedef_type

                typedef type_name type_type;

                typedef typename ::reflection::content::guarded::simple_struct< type_type, type_type const&, type_type const&, bool>::typedef_type  guarded_type;

                generic_class( type_type const& type_param )
                  {
                   process( type_param );
                  }

               ~generic_class(){}

               virtual void               refresh(){ }
             };

          typedef ::fileM::logic::storage::pure::property::generic_class< ::fileM::type::string_type > string_type;
          typedef ::fileM::logic::storage::pure::property::generic_class< ::fileM::type::size_type   >   size_type;
          typedef ::fileM::logic::storage::pure::property::generic_class< ::fileM::type::color_type  >  color_type;
        //typedef ::fileM::logic::storage::pure::property::generic_class< ::fileM::type::int_type    >    int_type;
        //typedef ::fileM::logic::storage::pure::property::generic_class< ::fileM::type::float_type  >  float_type;
        //typedef ::fileM::logic::storage::pure::property::generic_class< ::fileM::type::bool_type   >   bool_type;

         }
       }
     }
   }
 }

#endif