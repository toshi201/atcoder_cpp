#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int N; cin >> N;
    vector<std::pair<int, int>> A(N);
    for(int i = 1; i <= N; ++i) {
        int a; cin >> a;
        A[i - 1] = {a, i};
    }

    std::sort(A.begin(), A.end());

    for(auto& a: A) {
        cout << a.second << " ";
    }
}