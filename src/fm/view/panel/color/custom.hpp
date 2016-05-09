#ifndef fileM_view_panel_color_custom
#define fileM_view_panel_color_custom

// fileM::view::panel::color

#include <map>

#include "../../../logic/storage/pure/filter.hpp"

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

        class custom_class
         : public ::reflection::object::structure_class<>
         {
          public:
            typedef ::fileM::type::color_type   color_type;
            typedef ::fileM::logic::storage::pure::filter_class       filter_type;

            typedef std::map< filter_type, color_type > container_type;

            custom_class();
           ~custom_class();


           container_type m_container;
        };

       }
     }
   }
 }

#endif
