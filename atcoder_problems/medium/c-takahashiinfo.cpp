#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<vector<int>> C(3, vector<int>(3));
    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 3; ++j) {
            int c; cin >> c;
            C[i][j] = c;
        }
    }

    for(int a1 = 0; a1 <= 100; ++a1) {
        for(int a2 = 0; a2 <= 100; ++a2) {
            for(int a3 = 0; a3 <= 100; ++a3) {
                int b1 = C[0][0] - a1;
                int b2 = C[0][1] - a1;
                int b3 = C[0][2] - a1;
                vector<int> A(3);
                A[0] = a1;
                A[1] = a2;
                A[2] = a3;
                vector<int> B(3);
                B[0] = b1;
                B[1] = b2;
                B[2] = b3;

                bool flag = true;
                for(int i = 0; i < 3; ++i) {
                    for(int j = 0; j < 3; ++j) {
                        if (A[i] + B[j] != C[i][j]) {
                            flag = false;
                        }
                    }
                }

                if (flag) {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "No" << endl;
}