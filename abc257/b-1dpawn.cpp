#include<iostream>
#include<vector>
using namespace std;

int main() {
    int N, K, Q;
    cin >> N >> K >> Q;
    vector<int> A(K + 1), L(Q);
    for (auto &x : A) {
        cin >> x;
    }
    A[K + 1] = N + 1;

    for (int i = 0; i < Q; i++) {
        int x;
        cin >> x;
        if (A[x] + 1 < A[x + 1]) {
            A[x]++;
        }
    }

    for(int i = 1; i <= K; i++) {
        cout << A[i];
        if (i < K) {
            cout << " ";
        } else {
            cout << endl;
        }
    }



}