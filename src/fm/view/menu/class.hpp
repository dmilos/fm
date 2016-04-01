#ifndef fileM_view_menu_the_class
#define fileM_view_menu_the_class

#include "reflection/object.hpp"

#include "./item.hpp"

namespace fileM
 {
  namespace view
   {
    namespace menu
     {

      class the_class
       : public virtual ::reflection::object
       , public         ::fileM::view::menu::item
       {
        public:
          typedef ::fileM::view::menu::item item_type;
          std::vector<item_type> list_type;
    
           the_class();
     	    ~the_class();
    
        private:
           list_type m_list;
      }; 	

     }
   }
 }

#endif
 