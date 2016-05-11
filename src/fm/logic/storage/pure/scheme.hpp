#ifndef fm_logic_device_pure_scheme
#define fm_logic_device_pure_scheme

#include "../../../type/color.hpp"

#include "./filter.hpp"
#include "./file.hpp"

namespace fileM
 {
  namespace view
   {
    namespace panel
     {

      class scheme_class
       {
        public:
          typedef ::fileM::type::string_type string_type;

          typedef ::fileM::logic::storage::pure::file_class          file_type;
          typedef ::fileM::logic::storage::pure::filter_class      filter_type;

          typedef std::map< string_type, filter_type >               container_type;
        public:
          scheme_class();
         ~scheme_class();
        public:
           virtual void insert( string_type const& name_param, filter_type const& filter_param );
        public:
          string_type const& match( file_type const& file_param );
          bool               match( string_type const& name_param, file_type const& file_param );
       
       public:  // propertcontainer_typecontainer
         container_type    const& container()const{ return m_container; }
         bool                     container( container_type const& container_param ){ m_container = container_param; return bool( true ); }
       protected:
         container_type        & Fcontainer(){ return m_container; }
       private:
         container_type m_container;
         
       
       

        private:
          container_type m_scheme;
      };

     }
   }
 }


#endif
