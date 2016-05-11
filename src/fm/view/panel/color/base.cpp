#include "./base.hpp"

#include "type/ptr/make.hpp"

using namespace fileM::view::panel::color;

base_class::base_class()
 {
  insert(  "background-odd",  item_type( ::memory::pointer::make( ::reflection::content::guarded::simple<color_type>( color_type{ ::color::constant::black{} } ) ) ) );
  insert(  "background-even", item_type( ::memory::pointer::make( ::reflection::content::guarded::simple<color_type>( color_type{ ::color::constant::black{} } ) ) ) );
  insert(  "foreground-odd",  item_type( ::memory::pointer::make( ::reflection::content::guarded::simple<color_type>( color_type{ ::color::constant::white{} } ) ) ) );
  insert(  "foreground-even", item_type( ::memory::pointer::make( ::reflection::content::guarded::simple<color_type>( color_type{ ::color::constant::white{} } ) ) ) );

  insert(  "select-foreground-odd",    item_type( ::memory::pointer::make( ::reflection::content::guarded::simple<color_type>( color_type{ ::color::constant::black{} }  ) ) ) );
  insert(  "select-foreground-even",   item_type( ::memory::pointer::make( ::reflection::content::guarded::simple<color_type>( color_type{ ::color::constant::black{} }  ) ) ) );
  insert(  "select-background-odd",    item_type( ::memory::pointer::make( ::reflection::content::guarded::simple<color_type>( color_type{ ::color::constant::gray50{}}  ) ) ) );
  insert(  "select-background-even",   item_type( ::memory::pointer::make( ::reflection::content::guarded::simple<color_type>( color_type{ ::color::constant::gray50{} } ) ) ) );

  insert(  "cursor-background-odd",  item_type( ::memory::pointer::make( ::reflection::content::guarded::simple<color_type>( color_type{ ::color::constant::white{} } ) ) ) );
  insert(  "cursor-background-even", item_type( ::memory::pointer::make( ::reflection::content::guarded::simple<color_type>( color_type{ ::color::constant::white{} } ) ) ) );
  insert(  "cursor-foreground-odd",  item_type( ::memory::pointer::make( ::reflection::content::guarded::simple<color_type>( color_type{ ::color::constant::white{} } ) ) ) );
  insert(  "cursor-foreground-even", item_type( ::memory::pointer::make( ::reflection::content::guarded::simple<color_type>( color_type{ ::color::constant::white{} } ) ) ) );
  insert(  "cursor-border-odd",      item_type( ::memory::pointer::make( ::reflection::content::guarded::simple<color_type>( color_type{ ::color::constant::gray50{} } ) ) ) );
  insert(  "cursor-border-even",     item_type( ::memory::pointer::make( ::reflection::content::guarded::simple<color_type>( color_type{ ::color::constant::gray50{} } ) ) ) );

  insert(  "cursor-select-foreground-odd",    item_type( ::memory::pointer::make( ::reflection::content::guarded::simple<color_type>( color_type{ ::color::constant::white{} } ) ) ) );
  insert(  "cursor-select-foreground-even",   item_type( ::memory::pointer::make( ::reflection::content::guarded::simple<color_type>( color_type{ ::color::constant::white{} } ) ) ) );
  insert(  "cursor-select-background-odd",    item_type( ::memory::pointer::make( ::reflection::content::guarded::simple<color_type>( color_type{ ::color::constant::white{} } ) ) ) );
  insert(  "cursor-select-background-even",   item_type( ::memory::pointer::make( ::reflection::content::guarded::simple<color_type>( color_type{ ::color::constant::white{} } ) ) ) );
  insert(  "cursor-select-border-odd",        item_type( ::memory::pointer::make( ::reflection::content::guarded::simple<color_type>( color_type{ ::color::constant::gray50{} } ) ) ) );
  insert(  "cursor-select-border-even",       item_type( ::memory::pointer::make( ::reflection::content::guarded::simple<color_type>( color_type{ ::color::constant::gray50{} } ) ) ) );
 }

base_class::~base_class()
 {
 }

bool base_class::set( string_type const& name, color_type const& color_param )
 {
  return ::reflection::property::mutate::process( structure_type::get( name ), color_param );
 }

base_class::color_type
base_class::get( string_type const& name )const
 {
  return ::reflection::property::inspect::present< color_type const&>( structure_type::get( name ) );
 }
