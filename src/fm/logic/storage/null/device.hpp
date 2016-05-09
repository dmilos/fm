#ifndef fm_logic_device_null_device
#define fm_logic_device_null_device

// fileM::logic::storage::null::device_class


#include "../pure/device.hpp"


namespace fileM
 {
  namespace logic
   {
    namespace storage
     {
      namespace null
       {

        class device_class
         : public ::fileM::logic::storage::pure::device_class
         {
          public:
                    device_class()
                     {
                     }

            virtual ~device_class(){}

            device_class & operator =( device_class const& that ){ return *this; }

          public:
            virtual bool         connect(){ return false; }
            virtual void         disconnect(){  }
            virtual bool         status()const{ return false; }
            virtual bool         refresh()const{ return false; }

            virtual size_type    size(){ return 0; }
            virtual size_type    list( file_list_type & list, filter_type const& filter_param, size_type const& begin, size_type const& end ){ return 0; }

         };

       }
     }
   }
 }

#endif
