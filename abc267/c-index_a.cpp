#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

int main() {
    int N, M; cin >> N >> M;
    vector<int> A(N);
    for(auto& a: A) { cin >> a; }

    vector<int> S(N - M + 1, 0);
    for(int i = 0; i < N - M + 1; ++i) {
        for(int j = 0; j < M; ++j) {
            S[i] += ((j+1)*A[i + j]);
        }
    }

    cout << *std::max_element(S.begin(), S.end()) << endl;
}