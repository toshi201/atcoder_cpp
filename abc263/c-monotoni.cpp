#include<iostream>
#include<vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

//    int pi = N;
    int pj = M;

    vector<int> poi(M);
    for (int i = 1 ; i <= M; i++) {
        cout << i;
        poi[i - 1] = i;
    }
    cout << endl;

    for (int pi = N - 1; pi >= 0; pi--) {
        for (int pj = poi[pi]; pj <= M; pj++) {
            poi[pj]++;
            for(auto& x: poi) {
                cout << x;
            }
            cout << endl;
        }

    }

    while(pi > 1) {
        for (int j = pi + 1; j <= M; j++) {
            for (auto& a: poi) {
                cout << a;
            }
            cout << endl;
        }

        pi--;
        poi[pi - 1]++;
        for (int i = pi; i < M; i++) {

        }
    }


    while(pi > 1) {
        for (int i = pi; i < N; i++) {
            poi[i - 1] = poi[i - 2] + 1;
        }

        for (int i = pi; i < N; i++) {

            for (int j = pi; j <= M; j++) {
                poi[i - 1]++;
                for (auto& a: poi) {
                    cout << a;
                }
                cout << endl;
            }
        }
    }
    

}