// ----------------------------------------------------------------------------
// Constants.cpp
//
//
// Authors:
// Peter Polidoro polidorop@janelia.hhmi.org
// ----------------------------------------------------------------------------
#include "Constants.h"


namespace power_switch_controller
{
namespace constants
{
CONSTANT_STRING(device_name,"power_switch_controller");

CONSTANT_STRING(firmware_name,"PowerSwitchController");
// Use semantic versioning http://semver.org/
const modular_server::FirmwareInfo firmware_info =
  {
    .name_ptr=&firmware_name,
    .version_major=2,
    .version_minor=0,
    .version_patch=0,
  };

CONSTANT_STRING(hardware_name,"power_switch_controller");

const int bad_index = -1;

// Interrupts

// Units
CONSTANT_STRING(ms_unit,"ms");

// Properties
CONSTANT_STRING(polarity_reversed_property_name,"polarityReversed");

CONSTANT_STRING(channels_enabled_property_name,"channelsEnabled");

// Parameters
CONSTANT_STRING(channel_parameter_name,"channel");

CONSTANT_STRING(channels_parameter_name,"channels");

CONSTANT_STRING(polarity_parameter_name,"polarity");
CONSTANT_STRING(polarity_positive,"+");
CONSTANT_STRING(polarity_negative,"-");
modular_server::SubsetMemberType polarity_ptr_subset[POLARITY_SUBSET_LENGTH] =
  {
    {.cs_ptr=&polarity_positive},
    {.cs_ptr=&polarity_negative},
  };

CONSTANT_STRING(delay_parameter_name,"delay");
const long delay_min = 0;
const long delay_max = 1000000;

CONSTANT_STRING(period_parameter_name,"period");
const long period_min = 2;
const long period_max = 1000000;

CONSTANT_STRING(on_duration_parameter_name,"on_duration");
const long on_duration_min = 1;
const long on_duration_max = 1000000;

CONSTANT_STRING(count_parameter_name,"count");
const long count_min = 1;
const long count_max = 1000000;

CONSTANT_STRING(pwm_index_parameter_name,"pwm_index");

// Functions
CONSTANT_STRING(set_channel_on_function_name,"setChannelOn");
CONSTANT_STRING(set_channel_off_function_name,"setChannelOff");
CONSTANT_STRING(set_channels_on_function_name,"setChannelsOn");
CONSTANT_STRING(set_channels_off_function_name,"setChannelsOff");
CONSTANT_STRING(set_all_channels_on_function_name,"setAllChannelsOn");
CONSTANT_STRING(set_all_channels_off_function_name,"setAllChannelsOff");
CONSTANT_STRING(add_pwm_function_name,"addPwm");
CONSTANT_STRING(start_pwm_function_name,"startPwm");
CONSTANT_STRING(add_toggle_pwm_function_name,"addTogglePwm");
CONSTANT_STRING(start_toggle_pwm_function_name,"startTogglePwm");
CONSTANT_STRING(stop_pwm_function_name,"stopPwm");
CONSTANT_STRING(stop_all_pwm_function_name,"stopAllPwm");

// Callbacks

// Errors
CONSTANT_STRING(pwm_error,"Maximum number of pwm already set, must stop one to add another.");
}
}
