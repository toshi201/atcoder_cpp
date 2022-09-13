#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, X, Y;
    cin >> N >> X >> Y;

    vector<long long> A(N), B(N);
    A[0] = 0;
    B[0] = 1;

    for(int i = 1; i < N; i++) {
        B[i] = A[i - 1] + Y * B[i - 1];
        A[i] = A[i - 1] + X * B[i];
    }
    cout << A[N - 1] << endl;
    return 0;
}