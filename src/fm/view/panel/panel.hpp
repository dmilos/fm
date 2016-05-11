#ifndef fileM_view_panel_panel_class
#define fileM_view_panel_panel_class

// ::fileM::view::panel_class

#include "reflection/reflection.hpp"

#include "./color/base.hpp"
#include "./color/custom.hpp"

#include "./sort.hpp"
#include "./selection.hpp"

#include "./cursor.hpp"
#include "./action.hpp"

#include "../../logic/storage/pure/device.hpp"
#include "../../logic/storage/pure/filter.hpp"

namespace fileM
 {
  namespace view
   {

    class panel_class
     : public ::reflection::object::structure_class<>
     {
      public:

        panel_class();
       ~panel_class();

     public:
       ::fileM::logic::storage::pure::filter_class     m_filter;

       ::fileM::view::panel::cursor_class         m_cursor;
       ::fileM::view::panel::color::base_class    m_color;
     //::fileM::view::panel::color::custom_class  m_customColor;

       ::fileM::view::panel::sort_type                 m_sort;
       ::fileM::view::panel::selection_class           m_selection;
       ::fileM::view::panel::action_class              m_action;
     public:
       ::fileM::logic::storage::pure::device_pointer_type m_device;
    };

   }
 }

#endif
