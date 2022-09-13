#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int a, b;
    double d;
    cin >> a >> b >> d;
    double rad = d * M_PI / 180.0;
    double a2, b2;
    a2 = cos(rad)*a - sin(rad)*b;
    b2 = sin(rad)*a + cos(rad)*b;
    cout <<fixed<< setprecision(10)<< a2 << " " << b2 << endl;
}