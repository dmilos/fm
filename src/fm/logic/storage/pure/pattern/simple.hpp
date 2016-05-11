#ifndef fm_logic_storage_pure_pattern_simple
#define fm_logic_storage_pure_pattern_simple

// ::fileM::logic::storage::pure::pattern::simple_class<type_name>

#include "reflection/reflection.hpp"

#include "../../../../type/size.hpp"

#include "../pattern.hpp"


namespace fileM
 {
  namespace logic
   {
    namespace storage
     {
      namespace pure
       {
        namespace pattern
         {

          template< typename type_name >
           class simple_class
            : public ::fileM::logic::storage::pure::pattern::generic_class< type_name >
            , public ::reflection::content::guarded::simple_class< type_name, type_name const&, type_name const&, bool>::typedef_type
             {
              public:
                typedef type_name type_type;

               typedef ::fileM::logic::storage::pure::pattern::generic_class< type_name > generic_type;

               typedef typename generic_type::string_type string_type;

               typedef typename ::reflection::content::guarded::simple_class< type_name, type_name const&, type_name const&, bool>::typedef_type reflection_content_type;

                simple_class( string_type const& name_param, type_type const& value_param )
                 :generic_type( name_param, [this]( type_name const & value_param ){ return value_param == this->reflection_content_type::present(); } )
                 {
                  reflection_content_type::process( value_param );
                 }

               ~simple_class(){}
             };

         }
       }
     }
   }
 }

#endif
