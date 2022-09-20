#include<iostream>
#include<string>
using namespace std;

int main() {
    string S; cin >> S;

    int s_size = S.size();
    int ans = 0;
    for(int i = 1; i < s_size; ++i) {
        string T = S.substr(0, s_size - i);
        int t_size = T.size();
        if (t_size % 2 != 0) {
            continue;
        }
        string T1 = T.substr(0, t_size / 2);
        string T2 = T.substr(t_size / 2, t_size / 2);
        if (T1 == T2) {
            ans = std::max(ans, t_size);
        }
    }

    cout << ans << endl;
}