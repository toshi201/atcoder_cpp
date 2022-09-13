#include<iostream>
#include<unordered_set>
using namespace std;

int main() {
    std::unordered_set<int> S;
    for(int i = 0; i < 5; ++i) {
        int a; cin >> a;
        S.emplace(a);
    }

    cout << S.size() << endl;
}