#ifndef fileM_view_panel_panel_class
#define fileM_view_panel_panel_class

// ::fileM::view::panel_class

#include "reflection/reflection.hpp"

#include "./color/base.hpp"
#include "./color/custom.hpp"

#include "./sort.hpp"
#include "./selection.hpp"
#include "./filter.hpp"
#include "./cursor.hpp"

#include "../../logic/storage/pure/device.hpp"

namespace fileM
 {
  namespace view
   {

    class panel_class
     : public ::reflection::object::structure_class
     {
      public:

        panel_class();
   	   ~panel_class();

     public:
       ::fileM::view::panel::cursor_class         m_cursor;
       ::fileM::view::panel::color::base_class    m_color;
     //::fileM::view::panel::color::custom_class  m_customColor;

       ::fileM::view::panel::sort_type        m_sort;
       ::fileM::view::panel::filter_class     m_filter;
       ::fileM::view::panel::selection_class  m_selection;

     public:
       ::fileM::logic::storage::pure::device_pointer_type m_device;
    };

   }
 }

#endif
