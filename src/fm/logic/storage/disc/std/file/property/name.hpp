#ifndef fm_logic_device_disc_windows_file_property_name
#define fm_logic_device_disc_windows_file_property_name


#include "../../../../pure/property.hpp"


namespace fileM
 {
  namespace logic
   {
    namespace storage
     {
      namespace disc
       {
        namespace windows
         {
          namespace file
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

                   name_class( object_type * parent_param, string_type const& name_param = string_type() );

                  ~name_class();
                 public:
                     bool               process( string_type const& name_param );
                     string_type const& present()const{ return m_name; }
                 private:
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
