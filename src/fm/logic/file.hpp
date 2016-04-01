
#include "reflection/object.hpp"

namespace fileM
 {
  namespace logic
   {

    class file
    : public ::reflection::object
     {
      public:
       enum status_etor { ok_enum, connect_enum };

       typedef fileM::type::string string_type;

       std::vector<::fileM::logic::property > attribute_type;

       file(device_type *device ):m_device( device ){}
       virtual ~file(){}

       void void      size()const=0;

       void string_type const& property( string_type & name )const=0;
       void bool               property( string_type & name, string_type const& value )=0;

       void size_type read(  string_type      & content, size_type const& begin, size_type const& end )const=0;
       void size_type write( string_type const& content, size_type const& begin, size_type const& end )=0;

       device_type * device( void );
       device_type * device( device_type  * const & __device );
      protected:
        attribute_type m_attribute;
      private:
        device_type *m_device;
     };

   }
 }
