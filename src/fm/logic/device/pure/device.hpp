#ifndef fm_logic_device_pure_device
#define fm_logic_device_pure_device
// ::fileM::logic::device::pure::device_class


#include "reflection/reflection.hpp"

#include "../../../type/size.hpp"
#include "../../../type/string.hpp"

#include "../../property.hpp"

#include "./file.hpp"


namespace fileM
 {
  namespace logic
   {
    namespace device
     {
      namespace pure
       {

        class device_class
         : public ::reflection::object::structure_class
         {
          public:

            typedef ::fileM::type::size_type            size_type;
            typedef ::fileM::type::string_type        string_type;

            typedef ::fileM::logic::property_class       property_type;
            typedef ::fileM::logic::attribute_type      attribute_type;

            typedef ::fileM::logic::device::pure::file_class         file_type;
            typedef ::fileM::logic::device::pure::file_list_type     file_list_type;

            typedef std::function< size_t () >  listener_type;


                    device_class()
                     {
                      //insert( "connect",     item_type( ::reflection::property::function::member( this, &fileM::logic::device::this_type::connect     ) ) );
                      //insert( "disconnect",  item_type( ::reflection::property::function::member( this, &fileM::logic::device::this_type::disconnect  ) ) );
                      //insert( "status",      item_type( ::reflection::property::function::member( this, &fileM::logic::device::this_type::status      ) ) );
                      //insert( "ping",        item_type( ::reflection::property::function::member( this, &fileM::logic::device::this_type::ping        ) ) );
                      //insert( "property",    item_type( ::reflection::property::function::member( this, &fileM::logic::device::this_type::property    ) ) );
                      //insert( "size",        item_type( ::reflection::property::function::member( this, &fileM::logic::device::this_type::size        ) ) );
                     }

            virtual ~device_class(){}

            device_class & operator =( device_class const& that ){ return *this; }

          public:
            virtual bool         connect()=0;
            virtual void         disconnect()=0;
            virtual bool         status()const=0;
            virtual bool         refresh()const=0;

            virtual size_type    size()=0;
            virtual size_type    list( file_list_type & list, attribute_type const& filter_param, size_type const& begin, size_type const& end )=0;

          public:
            listener_type const& listener()const{ return m_listener; }
            void listener( listener_type const& listener_param ){ m_listener = listener_param; }
          private:
            listener_type m_listener;
         };

        typedef ::fileM::logic::device::pure::device_class *  device_pointer_type;
      //typedef ::fileM::logic::device::pure::device_class *  pointer_raw_type;
        typedef std::vector< device_pointer_type >            device_list_type;

       }
     }
   }
 }

#endif
