#include<iostream>
using namespace std;

using ll = long long;

int main() {
    ll N; cin >> N;
    ll con = 998244353LL;

    for(ll x = 0; x < con; ++x) {
        if ((N - x) % con == 0) {
            cout << x << endl;
            return 0;
        }
    }
}