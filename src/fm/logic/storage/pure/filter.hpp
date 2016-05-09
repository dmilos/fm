#ifndef fm_logic_device_pure_filter
#define fm_logic_device_pure_filter

// ::fileM::logic::storage::pure::filter_class

#include "reflection/reflection.hpp"

#include "../../../type/string.hpp"
#include "./pattern.hpp"
#include "./file.hpp"

namespace fileM
 {
  namespace logic
   {
    namespace storage
     {
      namespace pure
       {

        class filter_class
         : public ::reflection::object::structure_class<> 
         {
          public:
           typedef ::reflection::object::structure_class<>         structure_type;

           typedef ::fileM::type::string_type                         string_type;
           typedef ::fileM::logic::storage::pure::file_class            file_type;
           typedef ::fileM::logic::storage::pure::pattern_class      pattern_type;

           typedef std::shared_ptr< ::fileM::logic::storage::pure::pattern_class> pointer_type;  //!< TODO

           typedef std::map< string_type, pointer_type > container_type;

          public:
            explicit filter_class()
             {
             }

            virtual ~filter_class()
             {
             }

          public:
           bool match( file_type const& file_param )const
            {
             for( auto const& item: container() )
              {
               if( false == item.second->match( file_param ) )
                {
                 return false;
                }
              }
             return true;
            }

          public:
            using structure_type::insert;
            void insert( string_type const& name_param, pattern_type * pattern_param )
             {
              m_container.emplace( name_param, pointer_type{ pattern_param } );
             }
          public:
            container_type    const& container()const{ return m_container; }
            bool                     container( container_type const& container_param ){ m_container = container_param; return bool( true ); }
          //protected:
            container_type        & container(){ return m_container; }
          private:
            container_type m_container;

          public:

         };

       }
     }
   }
 }

#endif
