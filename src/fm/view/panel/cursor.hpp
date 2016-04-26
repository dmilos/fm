
//fileM::view::panel::cursor

#include "reflection/reflection.hpp"

namespace fileM
 {
  namespace view
   {
    namespace panel
     {

      class cursor
       : public ::reflection::content::guarded::pure_class< ::fileM::type::size_type, ::fileM::type::size_type const&, ::fileM::type::size_type const&, bool> 
       {
        public:
          typedef ::fileM::type::size_type size_type;
 
          cursor();
         ~cursor();
        public:
          bool       up( void );
          bool       down( void );
          size_type  position();
        //size_type     remove(size_type begin, size_type end );

        public:
          bool               process( size_type const& position_param );
          size_type const& present()const{ return m_position; }
        private:
          virtual void               refresh();
        private:
          size_type m_position;

      };

     }
   }
 }