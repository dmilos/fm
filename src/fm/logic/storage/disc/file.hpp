#ifndef fm_logic_storage_disc_file
#define fm_logic_storage_disc_file
// ::fileM::logic::storage::disc::file_class

#include "../pure/file.hpp"

namespace fileM
 {
  namespace logic
   {
    namespace storage
     {
      namespace disc
       {

        class file_class
         : public ::fileM::logic::storage::pure::file_class
         {
          public:

            typedef ::fileM::type::string_type                     string_type;
            typedef ::fileM::logic::storage::pure::device_class    device_type;
            typedef ::fileM::logic::storage::pure::file_class         pure_type;

            explicit file_class( device_type *device_param = nullptr, string_type const& name_param = string_type() );

           ~file_class();

          public:
            void refresh();

         };

        typedef std::shared_ptr<fileM::logic::storage::pure::file_class>           file_pointer_type;
        //typedef fileM::logic::storage::pure::file_class                      *    file_pointer_type;
        typedef std::vector< ::fileM::logic::storage::pure::file_class >             file_list_type;

       }
     }
   }
 }

#endif
