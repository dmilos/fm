#ifndef fileM_view_panel_filter
#define fileM_view_panel_filter

#include "../../type/color.hpp"

#include "../../logic/storage/pure/filter.hpp"
#include "../../logic/storage/pure/file.hpp"

namespace fileM
 {
  namespace view
   {
    namespace panel
     {

      class filter_class
       {
        public:
          typedef ::fileM::type::color_type color_type;

          typedef ::fileM::logic::storage::pure::file_class          file_type;
          typedef ::fileM::logic::storage::pure::filter_class      filter_type;
          typedef std::map< filter_type, color_type>               scheme_type;
        public:
          filter_class();
         ~filter_class();
        public:
          bool match( file_type const& );
        private:
          scheme_type m_scheme;
      };

     }
   }
 }


#endif
