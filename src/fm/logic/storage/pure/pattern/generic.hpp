#ifndef fm_logic_storage_pure_pattern_generic
#define fm_logic_storage_pure_pattern_generic

// ::fileM::logic::storage::pure::pattern::generic_class<type_name>

#include "../../../../type/size.hpp"

#include "../pattern.hpp"


namespace fileM
 {
  namespace logic
   {
    namespace storage
     {
      namespace pure
       {
        namespace pattern
         {

          template< typename type_name >
           class generic_class
            : public ::fileM::logic::storage::pure::pattern_class
             {
              public:
                typedef type_name type_type;

                typedef std::function< bool ( type_name const& )> function_type;

                typedef ::fileM::type::string_type        string_type; 

                typedef ::reflection::property::pure_class              pure_type;
                typedef ::fileM::logic::storage::pure::pattern_class pattern_type;

                generic_class( string_type const& name_param, function_type const& function_param =[]( type_name const& ){ return true; }  )
                 :m_function( function_param )
                 ,m_name( name_param )
                 {
                 }

               ~generic_class(){}

              public:
               virtual bool match( file_type const& file_param )const
                {
                 auto value_iter = file_param.container().find( name() ); 
                 if( value_iter == file_param.container().end() ) 
                  {
                   return true; 
                  }

                 pure_type const& pure = dynamic_cast< pure_type const& > ( *(value_iter->second) );

                 if( false == ::reflection::property::inspect::check< type_name const& >( pure ) )
                  {
                   return false;
                  }

                 type_name const& value = ::reflection::property::inspect::present< type_name const& >( pure  );

                 return m_function( value );
                }

              public:  // property function_typ function
                        function_type    const& function()const{ return  m_function; }
                virtual bool                    function( function_type const& function_param ){  m_function = function_param; return bool( true ); }
              protected:
                function_type        &  function(){ return  m_function; }
              private:
                function_type  m_function;

              public:
                        string_type    const& name()const{ return  m_name; }
                virtual bool                  name( string_type const& name_param ){  m_name = name_param; return bool( true ); }
              protected:
                string_type        &  name(){ return  m_name; }
              private:
                string_type  m_name;

             };

         }
       }
     }
   }
 }

#endif
