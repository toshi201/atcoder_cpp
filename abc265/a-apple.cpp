#include<iostream>
using namespace std;

int main() {
    int X, Y, N;
    cin >> X >> Y >> N;


    int ans2 = 0;
    ans2 = X * N;


    int ans1 = 0;
    int ap2n_buy_count = N / 3;
    int ap1n = N - (ap2n_buy_count) * 3;
    ans1 = ap2n_buy_count*Y + ap1n*X;

    cout << std::min(ans1, ans2) << endl;

}