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

                   //typedef ::fileM::type::category_type category_type;

                   typedef ::type::category::pure_class<string_type>  category_type;

                   folder_class( object_type * parent_param, string_type const& path_param);

                  ~folder_class();

                 public:
                   bool               process( string_type const& path_param ){ m_path= path_param; }
                   string_type const& present()const{ return m_path; }
                 private:
                   std::string m_path;

                 public:
                   virtual void               refresh();
                };

             }
           }
         }
       }
     }
   }
 }

#endif
