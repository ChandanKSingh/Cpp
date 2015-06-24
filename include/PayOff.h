#ifndef PAYOFF_H
#define PAYOFF_H

#include <algorithm> // needed for the std::max comparison function


class PayOff {
    public:
        PayOff(); // Default constructor
        virtual ~PayOff(){}; // Virtual destructor

        // Overloaded () operator, turns the Payoff into an abstract object
        virtual double operator() (const double& S) const = 0;

};

class PayOffCall : public PayOff {
    private:
        double K; // Strike price

    public:
        PayOffCall(const double& K_);
        virtual ~PayOffCall(){};

        // Virtual function is now over-ridden (not pure-virtual anymore)
        virtual double operator() (const double& S) const;
};

class PayOffPut : public PayOff {
    private:
        double K; // Strike

    public:
        PayOffPut(const double& K_);
        virtual ~PayOffPut(){};
        virtual double operator() (const double& S) const;
};

#endif // PAYOFF_H
