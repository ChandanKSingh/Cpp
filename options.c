/*  TestConversions.cpp
    Simple stuff for converting built-in types to strings
*/

#include <sstream>
#include <string>
#include <iostream>

using namespace std;

int main() {
    int i = 10;
    long j = 1234567890;
    float f = 3.14f;
    double d = 2.7122222222223;

    string myString = getString<int>(i);
    cout << myString << endl;

    myString = getString<long>(j);
    cout << myString << endl;

    myString = getString<float>(f);
    cout << myString << endl;

    myString = getString<double>(d);
    cout << myString << endl;

    return 0;
}








