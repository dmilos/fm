#ifndef fm_logic_manager_pure
#define fm_logic_manager_pure

#include "reflection/reflection.hpp"

#include "../type/size.hpp"

#include "./device.hpp"

namespace fileM
 {
  namespace logic
   {
    namespace manager
     {

      class pure_class
       : public ::reflection::object::structure_class
        {
         public:

          typedef ::fileM::type::size_type          size_type;

          typedef ::fileM::logic::device::pure_class          device_type;
          typedef ::fileM::logic::device::list_type      device_list_type;
          typedef ::fileM::logic::manager::pure_class           this_type;

                    pure_class()
                     {
                      //insert( "size",         item_type( ::reflection::property::function::member( this, &fileM::logic::device::this_type::size      ) ) );
                      //insert( "refresh",      item_type( ::reflection::property::function::member( this, &fileM::logic::device::this_type::refresh   ) ) );
                      //insert( "proprty-get",  item_type( ::reflection::property::function::member( this, &fileM::logic::device::this_type::property  ) ) );
                      //insert( "proprty-set",  item_type( ::reflection::property::function::member( this, &fileM::logic::device::this_type::property  ) ) );
                     }

          virtual ~pure_class(){}

          virtual bool         refresh()const=0;

          virtual void      size()const=0;
          virtual size_type list( device_list_type & list, size_type const& begin, size_type const& end )const=0;

        };


     }
   }
 }

#endif
