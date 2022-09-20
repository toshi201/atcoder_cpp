#include<iostream>
using namespace std;

int main() {
    int N; cin >> N;
    for(int i = 1; i <= N; ++i) {
        double x = i;
        x = int(x * 1.08);
        if (x == N) {
            cout << i << endl;
            return 0;
        }
    }

    cout << ":(" << endl;
}