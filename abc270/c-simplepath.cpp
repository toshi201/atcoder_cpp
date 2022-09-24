#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void dfs(vector<vector<int>>&G, vector<int>&par, int v) {

    for(auto& x: G[v]) {
        if (par[x] != -1) {
            continue;
        }
        par[x] = v;
        dfs(G, par, x);
    }
}

int main() {
    int N, X, Y; cin >> N >> X >> Y;
    vector<vector<int>> G(N + 1);
    for(int i = 0; i < N - 1; ++i) {
        int u, v; cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }

    vector<int> par(N + 1, -1);
    dfs(G, par, X);

    vector<int> ans;

    int cur_v = Y;
    while(cur_v != X) {
        ans.push_back(cur_v);
        cur_v = par[cur_v];
    }

    ans.push_back(X);

    std::reverse(ans.begin(), ans.end());

    for(auto& x: ans) {
        cout << x << " ";
    }
}