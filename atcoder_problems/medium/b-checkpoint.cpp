#include<iostream>
#include<vector>
using namespace std;

using ll = long long;

int main() {
    int N, M; cin >> N >> M;
    vector<ll> A(N), B(N);
    for(int i = 0; i < N; ++i) {
        ll a, b; cin >> a >> b;
        A[i] = a; B[i] = b;
    }
    vector<ll> C(M), D(M);
    for(int i = 0; i < M; ++i) {
        ll c, d; cin >> c >> d;
        C[i] = c; D[i] = d;
    }

    for(int i = 0; i < N; ++i) {
        ll min_dis = 2e10;
        int min_point;
        for(int j = 0; j < M; ++j) {
            ll dx = std::abs(A[i] - C[j]);
            ll dy = std::abs(B[i] - D[j]);
            ll dis = dx + dy;
            if (dis < min_dis) {
                min_dis = dis;
                min_point = j;
            }
        }
        cout << min_point + 1 << endl;
    }
}