#include<iostream>
#include<vector>
using namespace std;


int main() {
    int N, M; cin >> N >> M;
    vector<int> A(N);
    for(auto& a: A) { cin >> a; }
    vector<vector<int>> G(N);
    for(int i = 0; i < M; ++i) {
        int u, v; cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
}