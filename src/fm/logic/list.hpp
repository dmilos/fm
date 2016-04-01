#include "reflection/object.hpp"

namespace fileM
 {
  namespace logic
   {
    namespace device
     {

      class list
       {
        public:
         typedef fileM::logic::file   file_type;
         typedef fileM::logic::device device_type;
         typedef std::vector<file_type> container_type;

         // begin( size_type )
         // end( size_type )
         // filter::property

        public:
          device_type * device( void );
          device_type * device( device_type  * const & device_param );
        private:
          device_type *m_device;
       };

     }
   }
 }