#include<iostream>
#include<string>
using namespace std;

int main() {
    string a, b; cin >> a >> b;
    auto c = std::stoi(a + b);

    for(int i = 1; i * i <= c; ++i) {
        if (c % i == 0) {
            if (i == (c / i)) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
}