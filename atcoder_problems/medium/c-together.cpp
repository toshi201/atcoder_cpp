#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int N; cin >> N;
    vector<int> A(N); for(auto& a: A) { cin >> a; }
    vector<int> B(2e5, 0);

    for(auto& a: A) {
        B[a]++;
        if (a >= 1) {
            B[a - 1]++;
        }
        B[a + 1]++;
    }

    cout << *std::max_element(B.begin(), B.end()) << endl;
}