#include<iostream>
#include<string>
using namespace std;

int main() {
    int L, R;
    cin >> L >> R;
    string S = "atcoder";

    cout << S.substr(L - 1, R - L + 1) << endl;
}