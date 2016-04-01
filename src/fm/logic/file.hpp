
#include "reflection/object.hpp"

namespace fileM
 {

  class file
  : public ::reflection::object
   {
    public:
     enum status_etor { ok_enum, connect_enum };

     typedef int string_type;

      file();
   	 ~file();

     void void      size()const=0;
     void string_type const& property( string_type & name )const=0;
     void bool               property( string_type & name, string_type const& value )=0;

   	 void size_type content( string_type & content, size_type const& begin, size_type const& end )const=0;

   }; 	

 }
