#include<iostream>
using namespace std;
using ll = long long;
int main() {
    ll H, W; cin >> H >> W;
    if (H == 1 || W == 1) {
        cout << 1 << endl;
    } else if (H % 2 == 0 || W % 2 == 0) {
        cout << H*W / 2 << endl;
    } else  {
        cout << H*W / 2 + 1 << endl;
    }
}