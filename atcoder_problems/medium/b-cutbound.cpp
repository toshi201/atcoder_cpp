#include<iostream>
#include<set>
#include<string>
#include<algorithm>

using namespace std;

int main() {
    int N; cin >> N;
    string S; cin >> S;

    int ans = 0;
    for(int i = 1; i < N; ++i) {
        std::set<char> X(S.begin(), S.begin() + i);
        std::set<char> Y(S.begin() + i, S.end());
        std::set<char> C;

        std::set_intersection(X.begin(), X.end(), Y.begin(), Y.end(), std::inserter(C, C.end()));
        ans = std::max(ans, int(C.size()));
    }
    
    cout << ans << endl;
}