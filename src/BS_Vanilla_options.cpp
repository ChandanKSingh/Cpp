#include "BS_Vanilla_options.h"

/*BS_Vanilla_options::BS_Vanilla_options(){
    //ctor
}
*/
Point::Point() {
    init(0.0,0.0); // Default constructor
}

Point Point::OriginPoint = Point(0.0, 0.0);

Point& Point::GetOriginPoint() {
    return OriginPoint;
}

Point Point::MidPoint(const Point& p2) const {
    Point result((x+p2.x)*0.5,(y+p2.y)*0.5); // Calculate the point between the two points
    return result;
}

/*Point::Point(double xs, double ys) {
    init(xs, ys); // Normal constructor with coordinates
}

Point::Point(const Point &source) {
    init(source.x,source.y); // Copy constructor
}

void Point::init(double xs, double ys) {
    x = xs; // initialize the point
    y = ys;
}*/

Numeric Max(const Numeric& x, const Numeric& y) {
    if(x > y)
        return x;

    return y;
}

Numeric Min (const Numeric& x, const Numeric& y) {
    if (x < y)
        return x;

    return y;
}

double Point::X() const {
    return x; // Return x
}

double Point::Y() const {
    return y; // Return y
}

// Modifiers
void Point::X(double NewX) {
    x = NewX; // Set x
}

void Point::Y(double NewY) {
    y = NewY; // Set y
}


// non-recursive function to calculate power of a number
double power(double d, long n) {
    if (n == 0) return 1.0;
    if (n == 1) return d;
    double result = d;
    for (long j = 1; j < n; j++) {
        result *= d;
    }
    return result;
}

// Future value of a sum of money invested today
double FutureValue(double P0, long nPeriods, double r) {
    double factor = 1.0 + r;
    return P0 * power(factor, nPeriods);
}

// Present value of a series of future values
double PresentValue(const vector& prices, long nPeriods, double r) {

    // Number of periodds MUST == size of the vector
    assert (nPeriods == prizes.size());
    double factor = 1.0 + r;
    double PV = 0.0;
    for (long t = 0; t < nPeriods; t++) {
        PV += prices[t] / power(factor, t+1);
    }
    return PV;
}

// Present Value of a series of future values
Vector futureValues(5); // For five years, calls constructor
for (long j = 0; j < 4; j++) {
    futureValues[j] = 100.0; //Vector has indexing []
}
futurValues[4]= 1100.0;

int nPeriods = 5;
double r = 0.0625;
cout << "**Present value, series: "
     << PresentValue(futureValues, nPeriods,r) << endl;

/*
BS_Vanilla_options::~BS_Vanilla_options(){
    //dtor
}
*/


