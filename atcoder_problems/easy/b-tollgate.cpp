#include<iostream>
#include<vector>
using namespace std;

int main() {
    int N, M, X; cin >> N >> M >> X;
    vector<bool> A(N + 1, false);
    for(int i = 0; i < M; ++i) {
        int a; cin >> a;
        A[a] = true;
    }

    int cost = 0;
    for(int i = X; i < N; ++i) {
        if(A[i]) {
            cost++;
        }
    }

    int cost2 = 0;
    for(int i = X; i >= 0; --i) {
        if (A[i]) {
            cost2++;
        }
    }

    cout << std::min(cost, cost2) << endl;
}