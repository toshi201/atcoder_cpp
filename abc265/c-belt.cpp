#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main() {
    int H, W; cin >> H >> W;
    std::unordered_map<char, pair<int, int>> M;
    M.emplace('U', make_pair(-1, 0));
    M.emplace('D', make_pair(1, 0));
    M.emplace('L', make_pair(0, -1));
    M.emplace('R', make_pair(0, 1));
    vector<vector<bool>> seen(H, vector<bool>(W, false));

    vector<vector<char>> G(H, vector<char>(W));
    for(int i = 0; i < H; ++i) {
        for(int j = 0; j < W; ++j) {
            char c; cin >> c;
            G[i][j] = c;
        }
    }

    auto [next_dy, next_dx] = M[G[0][0]];
    int current_x = 0;
    int current_y = 0;
    int next_x = current_x + next_dx;
    int next_y = current_y + next_dy;
    seen[0][0] = true;

    while(
        (next_x) < W &&
        (next_x) >= 0 &&
        (next_y) < H &&
        (next_y) >= 0
    ) {
        if(seen[next_y][next_x]) {
            cout << -1 << endl;
            return 0;
        }

        auto [next_dy, next_dx] = M[G[next_y][next_x]];
        seen[current_y][current_x] = true;
        current_x = next_x;
        current_y = next_y;
        next_x += next_dx;
        next_y += next_dy;

    }

    cout << current_y + 1 << " " << current_x + 1 << endl;

    

}