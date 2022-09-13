#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> U(M);
    vector<int> V(M);
    vector<vector<bool>> G(N, vector<bool>(N, false));
    for (int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;
        G[u - 1][v - 1] = true;
    }

    int count = 0;

    for (int i = 0; i < N; ++i) {
        for (int j = i; j < N; ++j) {
            if (G[i][j]) {
                for (int k = j; k < N; ++k) {
                    if (G[j][k] && G[i][k]) {
                        ++count;
                    }
                }
            }
        }
    }

    cout << count << endl;
    return 0;
}