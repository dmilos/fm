#ifndef fm_logic_device_disc_device
#define fm_logic_device_disc_device
// ::fileM::logic::device::disc::device_class

#include "../pure/device.hpp"
#include "../pure/manager.hpp"


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
            typedef ::fileM::logic::device::pure::device_class pure_type;
            typedef ::fileM::logic::device::pure::manager_class manager_type;
            typedef ::fileM::logic::device::pure::manager_dumb_ptr_type manager_dumb_ptr_type;

            explicit device_class( manager_dumb_ptr_type const& manager_param = manager_dumb_ptr_type{nullptr} );

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
