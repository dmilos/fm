

// fileM::view::panel

#include "reflection/reflection.hpp"

namespace fileM
 {
  namespace view
   {

    class panel
     : public ::reflection::object
     {
      public:

        panel();
   	   ~panel();

      //  cursor()
      //  selection()
      // device::storage
      // filter
      // sort

     public:
      fileM::view::panel::cursor m_cursor;
    }; 	

   }
 }
