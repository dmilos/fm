#ifndef fileM_view_panel_action
#define fileM_view_panel_action

#include <functional>

//fileM::view::panel::action_class

#include "../../type/string.hpp"
#include "../../logic/storage/pure/file.hpp"

namespace fileM
 {
  namespace view
   {
    namespace panel
     {

      class action_class
       {
        public:
          typedef  ::fileM::type::string_type                 string_type;
          typedef ::fileM::logic::storage::pure::file_class   file_type;

          typedef std::function< bool (  file_type const& ) > function_type;

          typedef std::map< string_type, function_type > container_type;

          bool process( string_type const& name_param, file_type const& file_param );

        public:
          void insert( string_type const& name_param, function_type const& function_param );
          void remove(  string_type const& name_param );
          void clear( );
        public:  // propert container_type  container
                  container_type    const& container()const{ return m_container; }
        protected:
          container_type        & container(){ return m_container; }
        private:
          container_type m_container;

       };

     }
   }
 }

#endif
