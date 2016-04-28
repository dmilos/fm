#ifndef fm_logic_storage_disc_device
#define fm_logic_storage_disc_device
// ::fileM::logic::storage::disc::device_class

#include "../pure/device.hpp"
#include "../pure/manager.hpp"


namespace fileM
 {
  namespace logic
   {
    namespace storage
     {
      namespace disc
       {

        class device_class
         : public ::fileM::logic::storage::pure::device_class
         {
          public:
            typedef ::fileM::logic::storage::pure::device_class pure_type;
            typedef ::fileM::logic::storage::pure::manager_class manager_type;
            typedef ::fileM::logic::storage::pure::manager_dumb_ptr_type manager_dumb_ptr_type;

            explicit device_class( manager_dumb_ptr_type const& manager_param = manager_dumb_ptr_type{nullptr}, string_type const& name_param = "/dev/null" );

            virtual ~device_class();

          public:
            virtual bool         connect();
            virtual void         disconnect();
            virtual bool         status()const;
            virtual bool         refresh()const;

            virtual size_type    size();
            virtual size_type    list( file_list_type & list, attribute_type const& filter_param, size_type const& begin, size_type const& size );

         };

       }
     }
   }
 }

#endif
