#ifndef fm_logic_device_pure_device
#define fm_logic_device_pure_device
// ::fileM::logic::storage::pure::device_class


#include "reflection/reflection.hpp"

#include "../../../type/size.hpp"
#include "../../../type/string.hpp"

#include "./property.hpp"

#include "./file.hpp"


namespace fileM
 {
  namespace logic
   {
    namespace storage
     {
      namespace pure
       {

       	class manager_class;

        class device_class
         : public ::reflection::object::structure_class
         {
          public:

            typedef ::fileM::type::size_type            size_type;
            typedef ::fileM::type::string_type        string_type;

            typedef ::fileM::logic::storage::pure::property_class  property_type;
            typedef ::fileM::logic::storage::pure::attribute_type  attribute_type;

            typedef ::fileM::logic::storage::pure::file_class         file_type;
            typedef ::fileM::logic::storage::pure::file_list_type     file_list_type;

            typedef ::fileM::logic::storage::pure::manager_class    manager_type;
            typedef ::memory::pointer::dumb<manager_type>        manager_dumb_ptr_type;

            typedef std::function< size_t () >  listener_type;

            typedef ::fileM::logic::storage::pure::device_class  this_type;


            explicit device_class( manager_dumb_ptr_type const& manager_param = manager_dumb_ptr_type{ nullptr } )
                      : m_manager( manager_param )
                      {
                       //insert( "connect",     item_type( ::reflection::property::function::member( this, &this_type::connect     ) ) );
                       //insert( "disconnect",  item_type( ::reflection::property::function::member( this, &this_type::disconnect  ) ) );
                       //insert( "status",      item_type( ::reflection::property::function::member( this, &this_type::status      ) ) );
                       //insert( "refresh",        item_type( ::reflection::property::function::member( this, &this_type::ping        ) ) );
                      }

            virtual ~device_class(){}

            device_class & operator =( device_class const& that ){ return *this; }

          public:
            virtual bool         connect()=0;
            virtual void         disconnect()=0;
            virtual bool         status()const=0;
            virtual bool         refresh()const=0;

            virtual size_type    size()=0;
            virtual size_type    list( file_list_type & list, attribute_type const& filter_param, size_type const& begin, size_type const& size )=0;

          public:
            listener_type const& listener()const{ return m_listener; }
            void listener( listener_type const& listener_param ){ m_listener = listener_param; }
          private:
            listener_type m_listener;

          public:
            manager_dumb_ptr_type const& manager()const{ return m_manager; }
            void                    manager( manager_dumb_ptr_type const& manager_param ){ m_manager = manager_param; }
          private:
            manager_dumb_ptr_type m_manager;

         };

        typedef std::shared_ptr<::fileM::logic::storage::pure::device_class>  device_pointer_type;
      //typedef ::fileM::logic::storage::pure::device_class *  pointer_raw_type;
        typedef std::vector< device_pointer_type >             device_list_type;

       }
     }
   }
 }

#endif
