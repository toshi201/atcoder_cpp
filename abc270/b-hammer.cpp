#include<iostream>
using namespace std;

int main() {
    int X, Y, Z; cin >> X >> Y >> Z;

    if (X < 0) {
        X = -X;
        Y = -Y;
        Z = -Z;
    }

    if (Y < 0 || Y > X) {
        cout << X << endl;
        return 0;
    }

    if (0 < Y && Y < X)  {
        if (Z < 0) {
            cout << 2*std::abs(Z) + X << endl;
        } else if (0 < Z && Z < Y) {
            cout << X << endl;
        } else if ( Z > Y ) {
            cout << -1 << endl;
        }
    }
}