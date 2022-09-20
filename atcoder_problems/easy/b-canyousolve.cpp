#include<iostream>
#include<vector>
using namespace std;

int main() {
    int N, M, C; cin >> N >> M >> C;
    vector<int> B(M); for(auto& b: B) { cin >> b; }

    int ans = 0;
    for(int i = 0; i < N; ++i) {
        int su = 0;
        for(int j = 0; j < M; ++j) {
            int aij; cin >> aij;
            su += (aij*B[j]);
        }
        su += C;
        if (su > 0) { ans++; }
    }
    cout << ans << endl;
}