#include<iostream>
#include<vector>
using namespace std;

using ll = long long;
int main() {
    int N; ll T;
    cin >> N >> T;
    vector<ll> vec_t(N);
    for(auto& t: vec_t) { cin >> t; }

    ll cur_t = vec_t[0];
    ll ans = T;
    for(int i = 1; i < N; ++i) {
        ans += std::min(T, vec_t[i] - cur_t);
        cur_t = vec_t[i];
    }

    cout << ans << endl;
}