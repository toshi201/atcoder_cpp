#include<iostream>
#include<vector>
using namespace std;

int main() {
    int N; cin >> N;
    int K; cin >> K;
    vector<int> X(N); for(auto& x: X) { cin >> x; }
    int ans = 0;
    for(auto& x: X) {
        ans += (2*std::min(x, std::abs(K - x)));
    }

    cout << ans << endl;
}