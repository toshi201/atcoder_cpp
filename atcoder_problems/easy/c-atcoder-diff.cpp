#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int N; cin >> N;
    vector<int> D(N); for(auto& d: D) { cin >> d; }
    std::sort(D.begin(), D.end());

    int a = N / 2 - 1;
    int b = a + 1;

    cout << D[b] - D[a]  << endl;
}