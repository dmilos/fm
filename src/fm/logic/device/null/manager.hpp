#ifndef fm_logic_device_null_manager
#define fm_logic_device_null_manager

// fileM::logic::device::null::manager_class


#include "../pure/manager.hpp"


namespace fileM
 {
  namespace logic
   {
    namespace device
     {
      namespace null
       {

        class manager_class
         : public ::fileM::logic::device::pure::manager_class
          {
           public:

                      manager_class()
                       {
                       }

            virtual ~manager_class(){}

            virtual bool         refresh()const{ return false; }

            virtual size_type      size()const{ return 0; }
            virtual size_type list( device_list_type & list, size_type const& begin, size_type const& end )const{ return 0;}
          };

       }
     }
   }
 }

#endif
