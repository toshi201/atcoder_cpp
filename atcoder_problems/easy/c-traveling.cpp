#include<iostream>
#include<vector>
using namespace std;

int main() {
    int K, N; cin >> K >> N;
    vector<int> A(N); for(auto& a: A) { cin >> a; }
    int ans = A[N - 1] - A[0];

    for(int i = 1; i < N; ++i) {
        int i_to_start = K - A[i];
        int start_to_i1 = A[i - 1];
        ans = std::min(ans, i_to_start + start_to_i1);
    }

    cout << ans << endl;
}