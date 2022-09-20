#include<iostream>
#include<vector>
#include<iomanip>
#include<algorithm>
using namespace std;

int main() {
    int N; cin >> N;
    vector<double> V(N); for(auto& v: V) { cin >> v; }

    std::sort(V.begin(), V.end());
    double ans = V[0];

    for(int i = 1; i < N; ++i) {
        ans = (ans + V[i]) / 2;
    }
    cout << std::fixed << std::setprecision(5) << ans << endl;
}