

// fileM::view::panel::color

#include "reflection/reflection.hpp"

namespace fileM
 {
  namespace view
   {
    namespace panel
     {


      class color
       : public ::reflection::object
       {
        public:

          typedef ::fileM::type::string_type string_type;
          typedef ::fileM::type::color_type   color_type;
  
          color();
     	   ~color();
  
         bool set( string_type const& name, color_type const& );
         bool get( string_type const& name, color_type const& );
  
      }; 	

     }
   }
 }
