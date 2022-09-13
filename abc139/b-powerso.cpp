#include<iostream>
using namespace std;

int main() {
    int A, B; cin >> A >> B;
    auto [q, r] = std::div(B - 1, A - 1);
    if (r >= 1) {
        q += 1;
    }
    cout << q << endl;

}