#include "./custom.hpp"

#include "type/ptr/make.hpp"

using namespace fileM::view::panel::color;

custom_class::custom_class()
 {
 }

custom_class::~custom_class()
 {
 }

bool custom_class::set( filter_type const& filter_param, color_type const& color_param )
 {
  //m_container.emplace( filter_param, color_param );
  return false ; // ::reflection::property::mutate::process( structure_type::get( name ), color_param );
 }

custom_class::color_type const&
custom_class::get( filter_type const& filter_param )const
 {
  static color_type c;
  return c; //::reflection::property::inspect::present< color_type const&>( structure_type::get( name ) );
 } 