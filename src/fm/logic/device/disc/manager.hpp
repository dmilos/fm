#ifndef fm_logic_device_disc_manager
#define fm_logic_device_disc_manager
// fileM::logic::device::disc::manager_class

#include "../pure/manager.hpp"


namespace fileM
 {
  namespace logic
   {
    namespace device
     {
      namespace disc
       {

        class manager_class
         : public ::fileM::logic::device::pure::manager_class
         {
          public:

                      manager_class();

             virtual ~manager_class();

             virtual bool      refresh()const;
             virtual size_type size()const;
             virtual size_type list( device_list_type & list, size_type const& begin, size_type const& end )const;
          };

       }
     }
   }
 }

#endif
