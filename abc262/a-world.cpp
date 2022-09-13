#include <iostream>
using namespace std;

int main() {
    int Y;
    cin >> Y;
    int a = Y % 4;

    if (a == 2) {
        cout << Y << endl;
    } else if (a == 1) {
        cout << Y + 1 << endl; 
    } else if (a == 0) {
        cout << Y + 2 << endl;
    } else if (a == 3) { 
        cout << Y + 3 << endl;
    }
    return 0;

}