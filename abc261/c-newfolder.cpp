#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    int N;
    unordered_map<string, int> m;
    cin >> N;
    for (int i = 0; i < N; i++) {
        string f;
        cin >> f;
        auto itr = m.find(f);
        if (itr != m.end()) {
            int num = m[f];
            cout << f << '(' << num << ')' << endl;
            m[f]++;
        } else {
            cout << f << endl;
            m[f] = 1;
        }
    }
    return 0;
}