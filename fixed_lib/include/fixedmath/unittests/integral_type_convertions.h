#pragma once

#include "unit_test_common.h"

namespace fixedmath
{
  //------------------------------------------------------------------------------------------------------
  //
  // integral_to_fixed unit tests
  //
  static_assert( integral_to_fixed(0) == 0_fix );
  static_assert( integral_to_fixed(1) == limits__::one() );
  static_assert( integral_to_fixed(-1) == -limits__::one() );
  static_assert( integral_to_fixed(-1) != limits__::one() );
  static_assert( integral_to_fixed(-1) != 0_fix );
  static_assert( integral_to_fixed(1) != 0_fix );
  static_assert( integral_to_fixed(1) != integral_to_fixed(-1) );
  static_assert( integral_to_fixed(1) == integral_to_fixed(1) );

  static_assert( 0_fix == fixed_t{});
  static_assert( 1_fix == limits__::one());
  static_assert( -1_fix == -limits__::one());
  static_assert( as_fixed(0x80000000LL) == 32768_fix);
  static_assert( as_fixed(0) == 0_fix);
  static_assert( as_fixed(1l<<32) == 65536_fix );
  
  //------------------------------------------------------------------------------------------------------
  //
  // fixed_to_integral
  //
  static_assert( fixed_to_integral<int>(0.25_fix) == 0 );
  static_assert( fixed_to_integral<int>(1.25_fix) == 1 );
  static_assert( fixed_to_integral<int>(100.25_fix) == 100 );
  static_assert( fixed_to_integral<int>(-100.25_fix) == -100 );
  
}