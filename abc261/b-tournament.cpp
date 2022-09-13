#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<vector<char>> A(N, vector<char>(N));
    for (int i = 0; i < N; i++) {
        string l;
        cin >> l;
        for (int j = 0; j < N; j++) {
            A[i][j] = l[j];
        }
    }

    bool correct = true;
    for (int i = 1; i < N; i++) {
        for (int j = 1; j < i + 1; j++) {
            char result = A[i][j];
            if (result == 'W') {
                if (A[j][i] != 'D') {
                    cout << "incorrect" << endl;

                }
            }

            if (result == 'L') {
                if (A[j][i] != 'W') {
                    correct = false;
                }
            }

            if (result == 'D') {
                if (A[j][i] != 'D') {
                    correct = false;
                }
            }
        }
    }

    if (correct) {
        cout << "correct" << endl;
    } else {
        cout << "incorrect" << endl;
    }

    return 0;
}