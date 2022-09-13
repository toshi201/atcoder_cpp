#include <iostream>
using namespace std;

int main() {
    int N, X;
    cin >> N >> X;
    int y = (X - 1) / N;
    cout << char('A' + y) << endl;
    return 0;
}