#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {

    vector<int> A(5);
    for(auto& a: A) {
        cin >> a;
    }
    sort(A.begin(), A.end());
    int a = A[0];
    int b = A[1];
    int c = A[2];
    if (A[0] == A[1] &&  A[3] == A[4]) {
        if (A[1] == A[2] || A[2] == A[3]) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    } else {
        cout << "No" << endl;
    }


    return 0;



}