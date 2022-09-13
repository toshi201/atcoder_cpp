#include<iostream>
#include<vector>
using namespace std;

using ll = long long;
int main() {
    int N; cin >> N;
    vector<ll> A(N);
    vector<int> T(N), X(N);
    for(int i = 0; i < N; ++i) {
        ll a;
        int t, x;
        cin >> t >> x >> a;
        T[i] = t; X[i] = x; A[i] = a;
    }

    int cur_x = 0;
    int cur_t = 0;
    ll ans = 0;
    // vector<vector<ll>> dp(N + 1, vector<ll>(4));
    // dp[0][0] = 0;
    // dp[0][1] = 0;
    // dp[0][2] = 0;
    // dp[0][3] = 0;

    // for(int i = 1; i <= N; ++i) {
    //     int dt = std::abs(T[i] - T[i - 1]);
    //     for(int j = 0; j < 4; ++j) {
    //         int dis = std::abs(X[i - 1] - j);
    //         if (dt >= dis && j == X[i]) {
    //             dp[i][j] = std::max(dp[i - 1][j], dp[i - 1][X[i - 1]] + A[i]);
    //         } else {
    //             dp[i][j] = std::max(dp[i][j], dp[i - 1][j]);
    //         }
    //     }
    // }

    // for(auto& x: dp) {
    //     for(auto y: x) {
    //         cout << y << " ";
    //     }
    //     cout << endl;
    // }

    // cout << *std::max_element(dp[N].begin(), dp[N].end()) << endl;

    for(int i = 0; i < N; ++i) {
        int dis = std::abs(X[i] - cur_x);
        int dt = std::abs(T[i] - cur_t);

        if (dt >= dis) {
            cur_x = X[i];
            cur_t = T[i];
            ans += A[i];
        }
    }

    cout << ans << endl;


}