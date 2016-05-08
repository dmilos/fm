#ifndef fileM_view_status
#define fileM_view_status


#include "reflection/reflect.hpp"

namespace fileM
 {
  namespace view
   {

    class shortcut
     : public virtual ::reflection::object::structure_class
     {
      public:
        shortcut(){}
       ~shortcut(){}

       // history
       // favorites
       // often
       // presets0..N somethng like favorite but short list of 10 items
     };

   }
 }

#endif
