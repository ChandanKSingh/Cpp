#ifndef VANILLAOPTION_H
#define VANILLAOPTION_H
#include "payoff.h"

class VanillaOption {
    public:
        PayOff* pay_off;

        double K;
        double r;
        double T;
        double sigma;

        VanillaOption();
        VanillaOption(double _K, double _r, double _T,
                      double _sigma, PayOff* _pay_off);
        virtual ~VanillaOption(){};
};

#endif // VANILLAOPTION_H
