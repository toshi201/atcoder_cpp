#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
    int H, W; cin >> H >> W;
    vector<string> S(H); for(auto & s: S) { cin >> s; }

    for(int i = 0; i < H; ++i) {
        for(int j = 0; j < W; ++j) {
            if (S[i][j] == '#') {
                cout << '#';
            } else {
                int num = 0;

                for(int dx = -1; dx <= 1; dx++) {
                    for(int dy = -1; dy <= 1; dy++) {
                        int ni = i + dx;
                        int nj = j + dy;
                        if (ni < 0 || ni >= H || nj < 0 || nj >= W) {
                            continue;
                        }

                        if (S[ni][nj] == '#') {
                            num++;
                        }
                    }
                }
                cout << num;
            }
        }
        cout << endl;
    }

}