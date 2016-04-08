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
         typedef type_type *  raw_type;
         typedef memory::pointer::dumb<type_type> this_class;

         explicit dumb( raw_type ptr = nullptr_t{} ): m_ptr ( ptr ){}

                  dumb( this_class const& other ): m_ptr( other.m_ptr ){}

       private:
         raw_type m_ptr;
    };

   }
 }

#endif
