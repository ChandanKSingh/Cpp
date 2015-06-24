#ifndef _VANILLA_OPTION_CCP
#define _VANILLA_OPTION_CCP

#include "VanillaOption.h"

VanillaOption::VanillaOption(){}

VanillaOption::VanillaOption(double _K, double _r, double _T,
                             double _sigma, PayOff* _pay_off):
    K(_K), r(_r), T(_T), sigma(_sigma), pay_off(_pay_off) {}


#endif
