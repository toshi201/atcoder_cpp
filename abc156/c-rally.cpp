#include<iostream>
#include<vector>
#include<limits>
using namespace std;
using ll = long long;
int main() {
    int N; cin >> N;
    vector<int> X(N); for(auto& x: X) { cin >> x; }
    std::sort(X.begin(), X.end());

    ll ans = std::numeric_limits<ll>::max();
    for(int i = 0; i <= 100; ++i) {
        ll cur_ans = 0;
        for(auto& x: X) {
            cur_ans += (i - x) * (i - x);
        }
        ans = std::min(cur_ans, ans);
    }

    cout << ans << endl;
}