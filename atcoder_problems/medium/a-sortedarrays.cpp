#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

using ll = long long;
int main() {
    int N; cin >> N;
    vector<ll> A(N); for(auto& a: A) { cin >> a; }

    int res = 0;
    for(int i = 0; i < N; ++i) {
        while(i + 1 < N && A[i] == A[i + 1]) {
            ++i;
        }

        if (i + 1 < N && A[i] < A[i + 1]) {
            while(i + 1 < N && A[i] <= A[i + 1]) {
                ++i;
            }
        } else if (i + 1 < N && A[i] > A[i + 1]) {
            while(i + 1 < N && A[i] >= A[i + 1]) {
                ++i;
            }
        }
        ++res;
    }

    cout << res << endl;

    // vector<ll> diffs(N);
    // if (N <= 2) {
    //     cout << 1 << endl;
    //     return 0;
    // }

    // std::adjacent_difference(A.begin(), A.end(), diffs.begin());

    // for(auto& d: diffs) {
    //     cout << d << " ";
    // }

    // int ans = 0;
    // int flag = 0;
    // for(int i = 1; i < N; ++i) {
    // }

}