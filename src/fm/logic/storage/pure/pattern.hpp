#ifndef fm_logic_device_pure_pattern
#define fm_logic_device_pure_pattern
// ::fileM::logic::storage::pure::pattern_class
// ::fileM::logic::storage::pure::filter_type

#include "./file.hpp"

namespace fileM
 {
  namespace logic
   {
    namespace storage
     {
      namespace pure
       {

        class pattern_class
         {
          public:

           typedef ::fileM::logic::storage::pure::file_class         file_type;

         public:
           explicit pattern_class()
            {
            }

           virtual ~pattern_class()
            {
            }

         public:
           virtual bool match( file_type const& )const=0;

         };

        typedef ::fileM::logic::storage::pure::pattern_class pattern_pointer_type;

        typedef std::map< ::fileM::type::string_type, pattern_pointer_type * > filter_type;

       }
     }
   }
 }

#endif
