
#include "reflection/object.hpp"

namespace fileM
 {
  namespace logic
   {

    class manager
     : public ::reflection::object
      {
       public:

        typedef int device_type;
        typedef int size_type;
        typedef std::vector<device_type> list_type;

        typedef std::function<void(void)> inforemer_type;

                  manager(){}
         virtual ~manager(){}

         void informer( inforemer_type const& );

        void void      size()const=0;
        void size_type list( list_type & list, size_type const& begin, size_type const& end )const=0;

       private:
         inforemer_type m_informer;
      };

   }
 }

#endif
