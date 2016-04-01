
#include "reflection/object.hpp"

namespace fileM
 {

  class property
  : public ::reflection::object
   {
    public:
     enum status_etor { ok_enum, connect_enum };

     typedef int string_type;

      property();
   	 ~property();

     void string_type const& set( string_type & name )const=0;
     void bool               get( string_type & name, string_type const& value )=0;
   }; 	

 }
