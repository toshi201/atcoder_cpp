#include<iostream>
#include<string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int si = s.size();
    int inde = (si + 1) / 2;
    cout << s[inde - 1] << endl;
}