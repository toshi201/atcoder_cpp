#include<iostream>
#include<vector>
using namespace std;

int main() {
    int N, K; cin >> N >> K;
    vector<int> A(K); for(auto& a: A) { cin >> a; }

    vector<int> dp(N + 1, 0);

    for(int i = 0; i <= N; ++i) {
        for(int j = 0; j < K; ++j) {
            if (A[j] > i) {
                break;
            }

            dp[i] = std::max(dp[i], i - dp[i - A[j]]);
        }
    }

    cout << dp[N] << endl;
}