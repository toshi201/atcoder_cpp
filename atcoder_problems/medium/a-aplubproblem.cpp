#include<iostream>
using namespace std;

using ll = long long;
int main() {
    ll N, A, B; cin >> N >> A >> B;
    if (A > B) {
        cout << 0 << endl;
        return 0;
    } else if (N == 1LL && A == B) {
        cout << 1 << endl;
        return 0;
    } else if (N == 1LL && A != B) {
        cout << 0 << endl;
        return 0;
    }

    cout << ((B - A)*(N - 2) + 1) << endl;
}