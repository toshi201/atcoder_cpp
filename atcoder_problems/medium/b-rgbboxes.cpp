#include<iostream>
using namespace std;

int main() {
    int R, G, B, N; cin >> R >> G >> B >> N;

    long long ans = 0;

    for(int r = 0; r * R <= N; ++r) {
        for(int g = 0; r*R + g*G <= N; ++g) {
            int res = N - r*R - g*G;
            if (res % B != 0) {
                continue;
            }
            ans++;
        }
    }
    cout << ans << endl;
}