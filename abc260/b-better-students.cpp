#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
using namespace std;

int main() {
    int N, X, Y, Z;
    cin >> N >> X >> Y >> Z;
    vector<pair<int, int>> A(N), B(N), C(N);
    vector<bool> S(N);
    for (auto &a: A) {
        cin >> a.;
    }
    for (int i = 1; i <= N; i++) {
        cin >> A[i - 1].first;
        A[i-1].second = i;
    }
    for (auto &b: B) {
        cin >> b;
    }
    for (int i = 1; i<= N; i++) {
        cin >> B[i - 1].first;
        B[i-1].second = i;
    }

    for (int i = 0; i < N; i++) {
        C[i].first = A[i].first + B[i].first;
        C[i].second = i + 1;
    }

    sort(A.begin(), A.begin(), greater<int, int>());
    for (int i = 0; i < X; i++) {

    }

        // vectorの表示
    for(pair<int, int> i: S){
        cout << i.first << " " << i.second << endl;
    }
    cout << endl;

    return 0;
}