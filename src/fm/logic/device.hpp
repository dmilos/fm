
#include "reflection/object.hpp"

namespace fileM
 {
  namespace logic
   {
    namespace device
     {

      class _pure
       : public ::reflection::object
       {
        public:
          enum status_etor { ok_enum, connect_enum };

          typedef ::fileM::logic::file file_type;
          typedef int size_type;
          typedef std::vector<file_type> ;

                   device(){}
          virtual ~device(){}

          void bool      connect()=0;
          void void      disconnect()=0;
          void status_e  status()const=0;
          void bool      ping()const=0;
       };

     }
   }
 }
