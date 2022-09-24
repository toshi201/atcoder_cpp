#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

int main() {
    int N; cin >> N;
    vector<int> S(N); for(auto& s: S) { cin >> s; }

    std::sort(S.begin(), S.end());
    int ans = std::reduce(S.begin(), S.end(), 0);

    int c_ans = ans;
    for(int i = 0; i < N; ++i) {
        if (c_ans % 10 != 0) {
            cout << c_ans << endl;
            return 0;
        }

        c_ans = ans - S[i];
    }

    cout << 0 << endl;
}