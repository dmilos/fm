#ifndef fm_logic_storage_disc_linux_device_property_name
#define fm_logic_storage_disc_linux_device_property_name


#include "../../../../pure/property.hpp"


namespace fileM
 {
  namespace logic
   {
    namespace storage
     {
      namespace disc
       {
        namespace linux
         {
          namespace device
           {
            namespace property
             {

              class name_class
               : public ::fileM::logic::storage::pure::property_class
               , public ::reflection::content::guarded::pure_class< std::string, std::string const&,std::string const&, bool>
                {
                 public:
                   typedef ::fileM::logic::storage::pure::property_class property_type;

                   typedef ::fileM::type::string_type string_type;

                   typedef ::type::category::pure_class<string_type>  category_type;

                   name_class( object_type * parent_param );

                  ~name_class();
                  public:
                     bool               process( string_type const& name_param ){ m_name = name_param; }
                     string_type const& present()const{ return m_name; }

                  virtual size_type          size( )const;
                  virtual bool               set( string_type const& name )const;
                  // must obey value.capacity()
                  virtual size_type          get( string_type const& name, string_type & value );
                  virtual void               refresh();
                 private:
                   string_type m_name;
                };

             }
           }
         }
       }
     }
   }
 }

#endif
