#include<iostream>
#include<string>
using namespace std;

int main() {
    int N, A, B; cin >> N >> A >> B;
    string S; cin >> S;

    int pass = 0;
    int pass_ab = 0;
    for(int i = 1; i <= N; ++i) {
        char s = S[i - 1];
        if (s == 'c') {
            cout << "No" << endl;
        } else if (s == 'a') {
            if (pass < A + B) {
                cout << "Yes" << endl;
                pass++;
            } else {
                cout << "No" << endl;
            }
        } else if (s == 'b') {
            if (pass < A + B && pass_ab < B) {
                cout << "Yes" << endl;
                pass++;
                pass_ab++;
            } else {
                cout << "No" << endl;
            }
        }
    }

}