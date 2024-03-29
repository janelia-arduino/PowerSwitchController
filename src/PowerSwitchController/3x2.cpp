// ----------------------------------------------------------------------------
// 3x2.cpp
//
//
// Authors:
// Peter Polidoro peter@polidoro.io
// ----------------------------------------------------------------------------
#include "3x2.h"


#if defined(__MK20DX256__)

namespace power_switch_controller
{
namespace constants
{
const modular_server::HardwareInfo hardware_info =
{
  .name_ptr=&hardware_name,
  .part_number=1111,
  .version_major=1,
  .version_minor=1,
};

const size_t cs_pin = 10;
const size_t reset_pin = 2;
const size_t in_pin = 5;

const size_t map_pins[IC_COUNT] =
{
  6,
};

// Pins

// Units

// Properties

// Parameters

// Functions

// Callbacks

// Errors
}
}
#endif
