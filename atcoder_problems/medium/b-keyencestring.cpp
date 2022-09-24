#include<iostream>
#include<string>
using namespace std;

int main() {
    string S; cin >> S;
    string target = "keyence";
    if (S == target) {
        cout << "YES" << endl;
        return 0;
    }

    int N = S.size();

    for(int i = 0; i < N; ++i) {
        for(int j = i; j < N; ++j) {
            string S2 = "";
            for(int k = 0; k < N; ++k) {
                if (i <= k && k <= j) {
                    continue;
                } else {
                    S2 += S[k];
                }
            }

            if (S2 == target) {
                cout << "YES" << endl;
                return 0;
            }
        }
    }

    cout << "NO"  << endl;
}