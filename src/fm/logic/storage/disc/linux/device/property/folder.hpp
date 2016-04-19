#ifndef fm_logic_storage_disc_linux_device_property_folder
#define fm_logic_storage_disc_linux_device_property_folder


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

              class folder_class
               : public ::fileM::logic::storage::pure::property_class
               , public ::reflection::content::guarded::pure_class< std::string, std::string const&,std::string const&, bool>
                {
                 public:
                   typedef ::fileM::logic::storage::pure::property_class property_type;
                   typedef ::fileM::type::data_type data_type;

                   typedef ::fileM::type::string_type string_type;

                   typedef ::type::category::pure_class<string_type>  category_type;

                   folder_class( object_type * parent_param, string_type const& path_param);

                  ~folder_class();

                  public:
                     bool               process( string_type const& path_param ){ m_path= path_param; }
                     string_type const& present()const{ return m_path; }

                  public:
                   virtual size_type          size( )const;
                   virtual bool               set( data_type const& name );
                  // must obey value.capacity()
                   virtual size_type          get( data_type & value );
                   virtual void               refresh();

                   string_type const&         get( )const{}

                   virtual size_type          get( data_type & value )const{ return 0; }

                   virtual bool               insert(  data_type const& value,  size_type const& position ){ return false; }
                   virtual bool               replace( data_type const& value,  size_type const& position ){ return false; }
                   virtual bool               erase(   size_type const& begin,  size_type const& end ){ return false; }
                 private:
                  std::string m_path;
                };

             }
           }
         }
       }
     }
   }
 }

#endif
