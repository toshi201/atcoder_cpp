#include<iostream>
#include<vector>
using namespace std;

using ll = long long;
int main() {
    ll N; cin >> N;
    vector<int>a;
    for(int i = 0; i < 60; ++i) {
        if (N & (1LL << i)) {
            a.push_back(i);
        }
    }
    int k = a.size();

    vector<ll> res;
    for(int i = 0; i < (1 << k); ++i) {
        ll cur = 0;
        for(int j = 0; j < k; ++j) {
            if (i & (1 << j)) {
                cur |= (1LL << a[j]);
            }
        }
        res.push_back(cur);
    }
    // vector<long long> res {0LL};
    // for(int d = 0; d < 60; d++) {
    //     if (N & (1LL << d)) {
    //         int sz = res.size();
    //         for(int i = 0; i < sz; ++i) {
    //             res.push_back(res[i] | (1LL << d));
    //         }
    //     }
    // }

}