#include<iostream>
#include<vector>
#include<string>
using namespace std;


int main() {
    int H, W; cin >> H >> W;
    vector<string> S(H);
    for(auto& s: S) { cin >> s; }

    vector<int> dx {1, 0, -1, 0};
    vector<int> dy {0, 1, 0, -1};

    for(int i = 0; i < H; ++i) {
        for(int j = 0; j < W; ++j) {
            if (S[i][j] == '#') {
                bool isblack = false;
                for(int k = 0; k < 4; ++k) {
                    int nx = i + dx[k];
                    int ny = j + dy[k];
                    if (nx < 0 || nx >= H || ny < 0 || ny >= W) {
                        continue;
                    }

                    if (S[nx][ny] == '#') {
                        isblack = true;
                    }
                }
                if (!isblack) {
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "Yes" << endl;
}