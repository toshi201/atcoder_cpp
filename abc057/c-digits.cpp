#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main() {
    long long N;
    cin >> N;

    long long ans = numeric_limits<long long>::max();
    cout << ans << endl;
    for (long long i = 1; i * i <= N; ++i) {
        if (N % i == 0) {
            long long b = N / i;
            string A = to_string(i);
            string B = to_string(b);

            long long alen = A.length();
            long long blen = B.length();
            long long len = max(alen, blen);

            ans = min(ans, len);
        }
    }

    cout << ans << endl;
    return 0;

}