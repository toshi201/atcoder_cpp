#include<iostream>
#include<string>

using namespace std;

int main() {
    string S; cin >> S;
    string T = "ATCG";

    int N = S.size();

    int ans = 0;
    for(int i = 0; i < N; ++i) {
        for(int j = i; j < N; ++j) {
            bool ok = true;
            for(int x = i; x < j + 1; ++x) {
                if (T.find(S[x]) == string::npos) {
                    ok = false;
                }
            }
            if (ok) {
                ans = std::max(ans, j - i + 1);
            }
        }
    }

    cout << ans << endl;

}