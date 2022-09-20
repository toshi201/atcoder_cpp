#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<vector<int>> A(3, vector<int>(3));
    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 3; ++j ) {
            int a; cin >> a;
            A[i][j] = a;
        }
    }
    int N; cin >> N;
    vector<vector<bool>> card(3, vector<bool>(3, false));
    for(int k = 0; k < N; ++k) {
        int b; cin >> b;
        for(int i = 0; i < 3; ++i) {
            for(int j = 0; j < 3; ++j) {
                if (A[i][j] == b) {
                    card[i][j] = true;
                }
            }
        }
    }

    bool ans = false;
    for(int i = 0; i < 3; ++i) {
        int nu = 0;
        for(int j = 0; j < 3; ++j) {
            if (card[i][j]) {
                nu++;
            }
        }
        if (nu == 3) {
            ans = true;
        }
    }

    for(int j = 0; j < 3; ++j) {
        int nu = 0;
        for(int i = 0; i < 3; ++i) {
            if (card[i][j]) {
                nu++;
            }
        }
        if (nu == 3) {
            ans = true;
        }
    }

    if (card[0][0] && card[1][1] && card[2][2]) { ans = true; }
    if (card[2][0] && card[1][1] && card[0][2]) { ans = true; }

    if (ans) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}