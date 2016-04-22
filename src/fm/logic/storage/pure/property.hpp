#ifndef fm_logic_device_pure_property
#define fm_logic_device_pure_property
// ::fileM::logic::storage::pure::property_class

#include "reflection/reflection.hpp"

#include "../../../type/size.hpp"
#include "../../../type/string.hpp"
#include "../../../type/data.hpp"

namespace fileM
 {
  namespace logic
   {
    namespace storage
     {
      namespace pure
       {

        class property_class
         {
          public:

           typedef ::fileM::type::string_type string_type;
           typedef ::fileM::type::data_type data_type;
           typedef ::fileM::type::size_type size_type;

           typedef ::reflection::object::structure_class  object_type;
           typedef ::reflection::object::structure_class* object_ptr_type;

           typedef ::fileM::logic::storage::pure::property_class this_type;

         public:
           explicit property_class( object_type * parent_param = nullptr )
            :m_parent( parent_param )
            {
            }

           virtual ~property_class(){}

         public:
           virtual void               refresh()=0;

          public:
            object_ptr_type parent( void ){ return m_parent; }
          protected:
            object_ptr_type m_parent;
         };

        typedef ::fileM::logic::storage::pure::property_class property_pointer_type;

        typedef std::map< ::fileM::type::string_type, property_pointer_type * > attribute_type;

       }
     }
   }
 }

#endif

