#ifndef memory_pointer_dumb
#define memory_pointer_dumb
// ::memory::pointer::dumb< >

namespace memory
 {
  namespace pointer
   {

    template< typename type_name >
     class dumb
      {
       public:
         typedef type_name   type_type;
         typedef type_type * raw_type;

          explicit dumb( raw_type ptr = nullptr ): m_ptr ( ptr ){}
       private:
         raw_type m_ptr;
    };

   }
 }

#endif
