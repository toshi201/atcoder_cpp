#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main() {
    long long N, M, T; cin >> N >> M >> T;
    vector<long long> A(N - 1);
    for(auto& a: A) { cin >> a; }

    std::unordered_map<long long, long long> B;

    for(auto i = 0; i < M; ++i) {
        long long x, y; cin >> x >> y;
        B.emplace(x, y);
    }

    long long rem = T;
    for(auto i = 0 ; i < N - 1; ++i) {
        rem -= A[i];
        if (rem <= 0) {
            cout << "No" << endl;
            return 0;
        }

        auto it = B.find(i + 2);
        if (it != B.end()) {
            rem += B[i + 2];
        }
    }

    cout << "Yes" << endl;

}