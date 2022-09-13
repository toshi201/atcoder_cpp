#include<iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (auto &x : A) {
        cin >> x;
    }
    int P = 0;
    vector<int> B(N, -1);
    for (int i = 0; i < N; i++) {
        B[i] = 0;
        for (int j = 0; j < N; j++) {
            if (B[j] >= 0) {
                B[j] += A[i];
            }
        }
    }

    for (int i = 0; i < N; i++) {
        if (B[i] >= 4) {
            P++;
        }
    }
    cout << P << endl;
    return 0;
}