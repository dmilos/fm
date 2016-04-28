#ifndef fileM_view_panel_cursor
#define fileM_view_panel_cursor

//fileM::view::panel::cursor

#include "reflection/reflection.hpp"

#include "../../type/size.hpp"

namespace fileM
 {
  namespace view
   {
    namespace panel
     {

      class cursor_class
       : public ::reflection::content::guarded::pure_class< ::fileM::type::size_type, ::fileM::type::size_type const&, ::fileM::type::size_type const&, bool>
       {
        public:
          typedef ::fileM::type::size_type size_type;
        public:
          cursor_class();
         ~cursor_class();

        public:
          bool       up( void );
          bool       down( void );
          size_type  position();
        //size_type     remove(size_type begin, size_type end );

        public:
          bool             max( size_type const& max_param );
          size_type const& max()const{ return m_max; }
        private:
          size_type m_max;

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

#endif


