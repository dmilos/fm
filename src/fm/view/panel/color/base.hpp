#ifndef fileM_view_panel_color_base
#define fileM_view_panel_color_base


// fileM::view::panel::color

#include "reflection/reflection.hpp"
#include "../../../type/color.hpp"
#include "../../../type/string.hpp"

namespace fileM
 {
  namespace view
   {
    namespace panel
     {
      namespace color
       {

        class base_class
         : public ::reflection::object::structure_class<>
         {
          public:

            typedef ::reflection::object::structure_class<> structure_type;
            typedef ::fileM::type::string_type                 string_type;
            typedef ::fileM::type::color_type                   color_type;

            base_class();
           ~base_class();

           bool       set( string_type const& name, color_type const& );
           color_type get( string_type const& name )const;
        };

       }
     }
   }
 }

#endif
