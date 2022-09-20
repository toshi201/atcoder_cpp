#include<iostream>

using namespace std;

int main() {
    int A, B, C; cin >> A >> B >> C;
    int ans = 0;
    while(A % 2 == 0 && B % 2 == 0 && C % 2 == 0) {
        int a2 = A / 2;
        int b2 = B / 2;
        int c2 = C / 2;
        A = b2 + c2;
        B = a2 + c2;
        C = a2 + b2;
        ans++;

        if (A == C && B == C) {
            cout << -1 << endl;
            return 0;
        }
    }

    cout << ans << endl;
}