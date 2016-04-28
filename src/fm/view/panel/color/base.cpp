#include "./base.hpp"

#include "type/ptr/make.hpp"

using namespace fileM::view::panel::color;

base_class::base_class()
 {
  insert(  "background-odd",  item_type( ::memory::pointer::make( ::reflection::content::guarded::simple<color_type>( color_type() ) ) ) );
  insert(  "background-even",  item_type( ::memory::pointer::make( ::reflection::content::guarded::simple<color_type>( color_type() ) ) ) );
  insert(  "foreground-odd",    item_type( ::memory::pointer::make( ::reflection::content::guarded::simple<color_type>( color_type() ) ) ) );
  insert(  "foreground-even",   item_type( ::memory::pointer::make( ::reflection::content::guarded::simple<color_type>( color_type() ) ) ) );

  insert(  "cursor-background-odd",  item_type( ::memory::pointer::make( ::reflection::content::guarded::simple<color_type>( color_type() ) ) ) );
  insert(  "cursor-background-even",  item_type( ::memory::pointer::make( ::reflection::content::guarded::simple<color_type>( color_type() ) ) ) );
  insert(  "cursor-foreground-odd",    item_type( ::memory::pointer::make( ::reflection::content::guarded::simple<color_type>( color_type() ) ) ) );
  insert(  "cursor-foreground-even",   item_type( ::memory::pointer::make( ::reflection::content::guarded::simple<color_type>( color_type() ) ) ) );

  insert(  "select-foreground-odd",    item_type( ::memory::pointer::make( ::reflection::content::guarded::simple<color_type>( color_type() ) ) ) );
  insert(  "select-foreground-even",   item_type( ::memory::pointer::make( ::reflection::content::guarded::simple<color_type>( color_type() ) ) ) );
  insert(  "select-background-odd",    item_type( ::memory::pointer::make( ::reflection::content::guarded::simple<color_type>( color_type() ) ) ) );
  insert(  "select-background-even",   item_type( ::memory::pointer::make( ::reflection::content::guarded::simple<color_type>( color_type() ) ) ) );

  insert(  "cursor-select-foreground-odd",    item_type( ::memory::pointer::make( ::reflection::content::guarded::simple<color_type>( color_type() ) ) ) );
  insert(  "cursor-select-foreground-even",   item_type( ::memory::pointer::make( ::reflection::content::guarded::simple<color_type>( color_type() ) ) ) );
  insert(  "cursor-select-background-odd",    item_type( ::memory::pointer::make( ::reflection::content::guarded::simple<color_type>( color_type() ) ) ) );
  insert(  "cursor-select-background-even",   item_type( ::memory::pointer::make( ::reflection::content::guarded::simple<color_type>( color_type() ) ) ) );
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
