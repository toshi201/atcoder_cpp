#include<iostream>
using namespace std;

int main() {
    int A, B, K;
    cin >> A >> B >> K;
    
    int min_num = min(A, B);

    int iter = 0;
    for (int i = min_num; i >= 1; i--) {
        if ((A % i == 0) && (B % i == 0)) {
            iter++;

            if (iter == K) {
                cout << i << endl;
                return 0;
            }
        }
    }
}