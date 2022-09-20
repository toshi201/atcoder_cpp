#include<iostream>
using namespace std;

using ll = long long;
int main() {
    ll N, K; cin >> N >> K;
    ll t = N % K;
    ll ans = std::min(t, K - t);
    cout << ans << endl;
}