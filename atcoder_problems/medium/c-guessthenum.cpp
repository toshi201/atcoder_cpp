#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
    int N, M; cin >> N >> M;

    // std::map<int, int> S;
    // bool success = true;
    // for(int i = 0; i < M; ++i) {
    //     int s, c; cin >> s >> c;
    //     auto it = S.find(s);
    //     if (it != S.end()) {
    //         S.insert({s, c});
    //     } else {
    //         if (S[s] != c) {
    //             success = false;
    //         }
    //     }

    //     if (N >= 2 && s == 1 && c == 0) {
    //         success = false;
    //     }
    // }

    // if (!success) {
    //     cout << -1 << endl;
    //     return 0;
    // }
    // for(int i = 0; i < std::pow(10, N); ++i) {


    // }

    vector<int> S(M), C(M);
    for(int i = 0; i < M; ++i) {
        int s, c; cin >> s >> c;
        S[i] = s; C[i] = c;
    }

    for(int i = 0; i < 1000; ++i) {
        string s = to_string(i);
        if (s.length() != N) {
            continue;
        }

        bool ok = true;
        for(int j = 0; j < M; ++j) {
            // TODO
            // for(int k = 0; k < N; ++k) {
            //     if (k == S[i] && (S[k] ))
            // }
        }
    }
}