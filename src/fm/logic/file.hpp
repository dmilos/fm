#ifndef fm_logic_file__pure
#define fm_logic_file__pure
// fileM::logic::file::_pure

#include <vector>

#include "reflection/object.hpp"

#include "../type/string.hpp"
#include "../type/size.hpp"

#include "../type/dumb_ptr.hpp"

#include "./property.hpp"


namespace fileM
 {
  namespace logic
   {

    namespace device
     {
      class pure_class;
     }

    namespace file
     {

      class pure_class
       : public ::reflection::object_class
       {
        public:

          typedef ::fileM::type::size_type          size_type;
          typedef ::fileM::type::string_type      string_type;

          typedef ::fileM::logic::property          property_type;
          typedef ::fileM::logic::attribute_type   attribute_type;

          typedef ::fileM::logic::device::pure_class    device_type;
          typedef ::memory::pointer::dumb<device_type>  device_ptr_type;

          explicit pure_class( device_type *device_param )
           : m_device( device_param )
           {
            // insert( "property",    item_type( ::reflection::property::function::member( this, &fileM::logic::device::this_type::property    ) ) );
           }
         virtual ~pure_class(){}

         virtual size_type      size()const=0;

         // Set content capacity for max size
         virtual size_type read(  string_type      & content, size_type const& begin )const=0;
         // Set content capacity for max size
         virtual size_type write( string_type const& content, size_type const& begin )=0;

        public:
          device_ptr_type device( void ){ return m_device; }
        private:
          device_ptr_type m_device;
       };

      typedef ::fileM::logic::file::pure_class  *  pointer_type;
      typedef std::vector< pointer_type>              list_type;

     }
   }
 }

#endif
