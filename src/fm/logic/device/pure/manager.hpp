#ifndef fm_logic_device_pure_manager
#define fm_logic_device_pure_manager

#include "reflection/reflection.hpp"

#include "../../../type/size.hpp"

#include "./device.hpp"

namespace fileM
 {
  namespace logic
   {
    namespace device
     {
      namespace pure
       {

        class manager_class
         : public ::reflection::object::structure_class
         {
          public:

            typedef ::fileM::type::size_type          size_type;

            typedef ::fileM::logic::device::pure::device_class                device_type;
            typedef ::fileM::logic::device::pure::device_list_type       device_list_type;
            typedef ::fileM::logic::device::pure::manager_class                 this_type;

            typedef std::function< size_t () >  listener_type;

                      manager_class()
                       {
                        //insert( "size",         item_type( ::reflection::property::function::member( this, &fileM::logic::device::this_type::size      ) ) );
                        //insert( "refresh",      item_type( ::reflection::property::function::member( this, &fileM::logic::device::this_type::refresh   ) ) );
                        //insert( "proprty-get",  item_type( ::reflection::property::function::member( this, &fileM::logic::device::this_type::property  ) ) );
                        //insert( "proprty-set",  item_type( ::reflection::property::function::member( this, &fileM::logic::device::this_type::property  ) ) );
                       }

            virtual ~manager_class(){}

            virtual bool         refresh()const=0;

            virtual void      size()const=0;
            virtual size_type list( device_list_type & list, size_type const& begin, size_type const& end )const=0;

          public:
            listener_type const& listener()const{ return m_listener; }
            void listener( listener_type const& listener_param ){ m_listener = listener_param; }
          private:
            listener_type m_listener;
         };


       }
     }
   }
 }

#endif
