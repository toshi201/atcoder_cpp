#include<iostream>
#include<vector>

using namespace std;

int main() {
    int N; cin >> N;
    vector<long long> A(N);
    vector<long long> B(N + 1, 0);

    for(int i = 0; i < N; ++i) {
        long long a; cin >> a;
        B[a]++;
        A[i] = a;
    }

    long long su = 0;
    for(int i = 0; i <= N; ++i) {
        if (B[i] == 0) {
            continue;
        }

        su += (B[i] * (B[i] - 1) / 2);
    }

    for(int i = 0; i < N; ++i) {
        int k = A[i];

        long long ans = su - (B[k] * (B[k] - 1)) / 2 + ((B[k] - 1) * (B[k] - 2)) / 2;
        cout << ans << endl;
    }

}