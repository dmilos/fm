#ifndef fm_logic_device_disc_device
#define fm_logic_device_disc_device
// ::fileM::logic::device::disc::device_class

#include "../pure/device.hpp"


namespace fileM
 {
  namespace logic
   {
    namespace device
     {
      namespace disc
       {

      class device_class
       : public ::fileM::logic::device::pure::device_class
       {
        public:
                  device_class();

          virtual ~device_class();

        public:
          virtual bool         connect();
          virtual void         disconnect();
          virtual bool         status()const;
          virtual bool         refresh()const;

          virtual size_type    size();
          virtual size_type    list( file_list_type & list, attribute_type const& filter_param, size_type const& begin, size_type const& end );

       };
       
       }
     }
   }
 }

#endif
