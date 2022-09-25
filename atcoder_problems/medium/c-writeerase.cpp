#include<iostream>
#include<unordered_set>

using namespace std;

int main() {
    int N; cin >> N;
    std::unordered_set<long long> A;

    for(int i = 0; i < N; ++i) {
        long long a; cin >> a;
        auto it = A.find(a);
        if (it != A.end()) {
            A.erase(a);
        } else {
            A.emplace(a);
        }
    }

    cout << A.size() << endl;
}