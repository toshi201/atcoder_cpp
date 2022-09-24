#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main() {
    int H, W; cin >> H >> W;
    vector<string> A(H);
    for(auto& a: A) {
        cin >> a;
    }

    for(int i = 0; i < H; ++i) {
        bool res = std::all_of(A[i].begin(), A[i].end(), [](char x) {
            return x == '.';
        });
        if (res) {
            
        }
    }
}