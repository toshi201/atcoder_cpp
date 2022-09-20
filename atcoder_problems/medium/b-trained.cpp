#include<iostream>
#include<vector>
using namespace std;

int main() {
    int N; cin >> N;
    vector<int> A(N + 1);
    for(int i = 1; i <= N; ++i) {
        int a; cin >> a;
        A[i] = a;
    }
    vector<bool> seen(N + 1, false);

    int cur = 1;
    int ans = 0;
    while(!seen[cur]) {
        seen[cur] = true;
        cur = A[cur];
        ans++;

        if (cur == 2) {
            cout << ans << endl;
            return 0;
        }
    }

    cout << -1 << endl;
}