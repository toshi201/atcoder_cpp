#include <iostream>
using namespace std;

int main() {
    int N, M, X, T, D;
    cin >> N >> M >> X >> T >> D;
    if ( M >= X ) {
        cout << T << endl;
    } else {
        int a;
        a = T - X * D;
        cout << M * D + a << endl;
    }
    return 0;
}