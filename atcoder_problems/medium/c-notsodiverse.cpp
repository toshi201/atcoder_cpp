#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

int main() {
    int N, K; cin >> N >> K;
    vector<int> A(N); for(auto& a: A) { cin >> a; }
    std::map<int, int> cnt;
    for(auto& a: A) {
        cnt[a]++;
    }

    vector<int> v;
    for(auto&p: cnt) {
        v.push_back(p.second);
    }
    std::sort(v.begin(), v.end());

    int n = v.size();

    if (n <= K) {
        cout << 0 << endl;
    } else {
        int ans = 0;
        for(int i = 0; i < n - K; ++i) {
            ans += v[i];
        }
        cout << ans << endl;
    }


}