#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int N, K; cin >> N >> K;

    double ans = 0.0;
    for(int i = 1; i <= N; ++i) {
        int y = i; 
        double q = 1.0/N;
        while(y < K) {
            y *= 2;
            q /= 2;
        }
        ans += q;
    }

    cout << std::fixed << std::setprecision(10) << ans << endl;
}
