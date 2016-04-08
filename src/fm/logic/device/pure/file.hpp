#ifndef fm_logic_device_pure_file
#define fm_logic_device_pure_file
// ::fileM::logic::device::pure::file_class

#include <vector>
#include <functional>


#include "reflection/reflection.hpp"

#include "../../../type/string.hpp"
#include "../../../type/size.hpp"

#include "../../../type/dumb_ptr.hpp"

#include "./property.hpp"


namespace fileM
 {
  namespace logic
   {
    namespace device
     {
      namespace pure
       {

        class device_class;

        class file_class
         : public ::reflection::object::structure_class
         {
          public:

            typedef ::fileM::type::size_type          size_type;
            typedef ::fileM::type::string_type      string_type;

            typedef ::fileM::logic::device::pure::property_class        property_type;
            typedef ::fileM::logic::device::pure::attribute_type     attribute_type;

            typedef ::fileM::logic::device::pure::device_class    device_type;
            typedef ::memory::pointer::dumb<device_type>  device_ptr_type;

            typedef std::function< size_t () >  listener_type;


            typedef ::fileM::logic::device::pure::file_class this_type;


            explicit file_class( device_type *device_param = nullptr );

            virtual ~file_class();

          public:
            device_ptr_type device( void ){ return m_device; }
          private:
            device_ptr_type m_device;

          public:
            listener_type const& listener()const{ return m_listener; }
            void                 listener( listener_type const& listener_param ){ m_listener = listener_param; }
          protected:
            listener_type m_listener;
         };

        typedef fileM::logic::device::pure::file_class                      *    file_pointer_type;
        typedef std::vector< ::fileM::logic::device::pure::file_class >             file_list_type;

       }
     }
   }
 }

#endif
