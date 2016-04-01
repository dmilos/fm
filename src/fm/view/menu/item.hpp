#ifndef fileM_view_menu_item
#define fileM_view_menu_item


#include "reflection/object.hpp"

namespace fileM
 {
  namespace view
   {
    namespace menu
     {

      // expect to have property name
      class item
       : public virtual ::reflection::object
       {
        public:
           item(){}
          ~item(){}
       }; 	

     }
   }
 }

#endif
 