#include<iostream>
#include<vector>
using namespace std;

int main() {
    int R, C;
    cin >> R >> C;
    vector<vector<bool>> G(15, vector<bool>(15));
    for(int i = 0; i < 7; ++i) {
        for(int j = i; j < 15 - i; ++j) {
            if (i % 2 == 0) {
                G[i][j] = true;
                G[j][i] = true;
                G[14 - i][j] = true;
                G[j][14 - i] = true;
            } else {
                G[i][j] = false;
                G[j][i] = false;
                G[14 - i][j] = false;
                G[j][14 - i] = false;
            }
        }
    }

    if (G[R - 1][C - 1]) {
        cout << "black" << endl;
    } else {
        cout << "white" << endl;
    }

}