#ifndef fm_logic_device_pure_pattern
#define fm_logic_device_pure_pattern
// ::fileM::logic::storage::pure::pattern_class
// ::fileM::logic::storage::pure::filter_type

#include "./file.hpp"

namespace fileM
 {
  namespace logic
   {
    namespace storage
     {
      namespace pure
       {

        class pattern_class
         {
          public:

           typedef ::fileM::logic::storage::pure::file_class         file_type;

           public:
             explicit pattern_class()
              {
              }
           
             virtual ~pattern_class()
              {
              }
           
           public:
             virtual bool match( file_type const& )const=0;
           
           // ??? public:
           // ???           string_type    const& name()const{ return  m_name; }
           // ???   virtual bool                  name( string_type const& name_param ){  m_name = name_param; return bool( true ); }
           // ??? protected:
           // ???   string_type        &  name(){ return  m_name; }
           // ??? private:
           // ???   string_type  m_name;
         };

       }
     }
   }
 }

#endif
