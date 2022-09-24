#include<iostream>
#include<vector>
using namespace std;

int main() {
    int N; cin >> N;
    vector<int> T(N), X(N), Y(N);

    for(int i = 0; i < N; ++i) {
        int t, x, y; cin >> t >> x >> y;
        T[i] = t; X[i] = x; Y[i] = y;
    }

    int cur_x = 0, cur_y = 0, cur_t = 0;
    for(int i = 0; i < N; ++i) {
        int dis_x = std::abs(X[i] - cur_x);
        int dis_y = std::abs(Y[i] - cur_y);
        int dis_t = T[i] - cur_t;
        if (dis_t < (dis_x + dis_y)) {
            cout << "No" << endl;
            return 0;
        }
        if ((dis_t + dis_x + dis_y) % 2 != 0) {
            cout << "No" << endl;
            return 0;
        }

        cur_x = X[i];
        cur_y = Y[i];
        cur_t = T[i];
    }

    cout << "Yes" << endl;
}