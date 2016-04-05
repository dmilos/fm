#ifndef fm_logic_device__pure
#define fm_logic_device__pure
// fileM::logic::device::_pure


#include "reflection/reflection.hpp"

#include "../type/size.hpp"

#include "../type/string.hpp"

#include "./property.hpp"

#include "./file.hpp"


namespace fileM
 {
  namespace logic
   {
    namespace device
     {

      class pure_class
       : public ::reflection::object::structure_class
       {
        public:

          typedef ::fileM::type::size_type            size_type;
          typedef ::fileM::type::string_type        string_type;

          typedef ::fileM::logic::property        property_type;
          typedef ::fileM::logic::attribute_type attribute_type;

          typedef ::fileM::logic::file::pure_class         file_type;
          typedef ::fileM::logic::file::list_type     file_list_type;

          typedef fileM::logic::device::pure_class         this_type;


                  pure_class()
                   {
                    //insert( "connect",     item_type( ::reflection::property::function::member( this, &fileM::logic::device::this_type::connect     ) ) );
                    //insert( "disconnect",  item_type( ::reflection::property::function::member( this, &fileM::logic::device::this_type::disconnect  ) ) );
                    //insert( "status",      item_type( ::reflection::property::function::member( this, &fileM::logic::device::this_type::status      ) ) );
                    //insert( "ping",        item_type( ::reflection::property::function::member( this, &fileM::logic::device::this_type::ping        ) ) );
                    //insert( "property",    item_type( ::reflection::property::function::member( this, &fileM::logic::device::this_type::property    ) ) );
                    //insert( "size",        item_type( ::reflection::property::function::member( this, &fileM::logic::device::this_type::size        ) ) );
                   }

          virtual ~pure_class(){}

          this_type & operator =( this_type const& that ){ return *this; }

        public:
          virtual bool         connect()=0;
          virtual void         disconnect()=0;
          virtual bool         status()const=0;
          virtual bool         refresh()const=0;

          virtual size_type    size()=0;
          virtual size_type    list( file_list_type & list, attribute_type const& filter_param, size_type const& begin, size_type const& end )=0;

       };

       typedef ::fileM::logic::device::pure_class *  pointer_type;
     //typedef ::fileM::logic::device::pure_class *  pointer_raw_type;
       typedef std::vector< pointer_type > list_type;

     }
   }
 }

#endif
