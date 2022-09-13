#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, K;
    cin >> N, K;
    vector<int> A(K);
    for (auto &a: A) {
        cin >> a;
    }
    vector<int> X(N);
    vector<int> Y(N);
    for (int i = 0; i < N; i++) {
        cin >> X[i] >> Y[i];
    }

    double max_dis = 0.0;

    for (int i = 0; i < K; i++) {
        int light_person = A[i];
        int l_x = X[light_person];
        int l_y = Y[light_person];
        for (int j = 0; j < N; j++) {
            
        }
    }

    return 0;
}