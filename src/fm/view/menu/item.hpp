#ifndef fileM_view_menu_item
#define fileM_view_menu_item

#include "reflection/reflection.hpp"

namespace fileM
 {
  namespace view
   {
    namespace menu
     {

      // expect to have property name
      class item_class
       : public virtual ::reflection::object::structure_class<>
       {
        public:
           item_class();
          ~item_class();
       };

     }
   }
 }

#endif
