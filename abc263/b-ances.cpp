#include<iostream>
#include<vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> P(N - 1);
    for (int i = 0; i < N - 1; i++) {
        int p;
        cin >> p;
        P[i] = p;
    }

    int par = P[N - 2];
    int count = 1;
    while(1) {
        if (par == 1) {
            cout << count <<endl;
            return 0;
        }
        count++;
        par = P[par - 2];
    }

 


}