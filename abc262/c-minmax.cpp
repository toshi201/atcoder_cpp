#include <iostream>
#include <vector>
using namespace std;

int main () {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int &a: A) {
        cin >> a;
    }

    int ok1 = 0;
    int ok2 = 0;
    for (int i = 1; i <= N; ++i) {
        if (i == A[i - 1]) {
            ++ok1;
        } else if(i == A[A[i - 1] - 1]){
            ++ok2;
        }
    }

    long long ans = ((ok1 * (ok1 - 1)) / 2) + ok2 / 2;

    cout << ans << endl;
}