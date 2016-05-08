#ifndef fm_logic_storage_pure_pattern_generic
#define fm_logic_storage_pure_pattern_generic

// ::fileM::logic::storage::pure::pattern::generic_class

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

                typedef ::fileM::logic::storage::pure::pattern_class pattern_type;

                generic_class( function_type const& function_param ){ }

               ~generic_class(){}


              public:  // propertfunction_typ function
                        function_type    const& function()const{ return  m_function; }
                virtual bool                    function( function_type const& function_param ){  m_function = function_param; return bool( true ); }
              protected:
                function_type        &  function(){ return  m_function; }
              private:
                function_type  m_function;

             };

         }
       }
     }
   }
 }

#endif
