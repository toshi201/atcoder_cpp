#include <iostream>
using namespace std;

int main() {
    int L1, R1, L2, R2;
    cin >> L1 >> R1 >> L2 >> R2;
    int l, r;
    l = max(L1, L2);
    r = min(R1, R2);
    cout << max(r - l, 0) << endl;

    return 0;
}