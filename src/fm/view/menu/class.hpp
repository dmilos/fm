#ifndef fileM_view_menu_class
#define fileM_view_menu_class

#include <vector>

#include "reflection/reflection.hpp"

#include "./item.hpp"



namespace fileM
 {
  namespace view
   {
    namespace menu
     {

      class class_class
       : public ::fileM::view::menu::item_class
       {
        public:
          typedef ::fileM::view::menu::item_class item_type;

          typedef std::vector<item_type> list_type;

           class_class();
          ~class_class();

        private:
           list_type m_list;
      };

     }
   }
 }

#endif
