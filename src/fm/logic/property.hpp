
#include "reflection/object.hpp"

namespace fileM
 {
  namespace logic
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
       void refresh()=0;

        file_type * file( void );
        file_type * file( file_type  * const & file_param );
      private:
        file_type *m_file;

     };

   }
 }
