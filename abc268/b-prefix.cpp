#include<iostream>
#include<string>
using namespace std;

int main() {
    string S, T;
    cin >> S;
    cin >> T;

    for(int i = 0; i < int(S.size()); ++i) {
        if (S[i] != T[i]) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
}