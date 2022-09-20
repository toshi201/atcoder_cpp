#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
    vector<string>S(10);
    for(auto& s: S) {
        cin >> s;
    }

    int A, B, C, D;
    bool flag = false;
    for(int i = 0; i < 10; ++i) {
        for(int j = 0; j < 10; ++j) {
            if (S[i][j] == '#') {
                A = i;
                C = j;
                flag = true;
                break;
            }
        }
        if (flag) {
            break;
        }
    }

    for(int i = A; i < 10; ++i) {
        if ( S[i][C] == '.') {
            B = i;
            break;
        }
        if (i == 9) {
            B = 10;
        }
    }

    for(int i = C; i < 10; ++i) {
        if (S[A][i] == '.') {
            D = i;
            break;
        }
        if (i == 9) {
            D = 10;
        }
    }

    cout << A + 1 << " " << B << endl;
    cout << C + 1 << " " << D << endl;

}