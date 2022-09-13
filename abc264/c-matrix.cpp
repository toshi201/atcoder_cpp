#include<iostream>
#include<vector>
using namespace std;

int main() {
    int H1, W1;
    cin >> H1 >> W1;
    vector<vector<int>> A(H1, vector<int>(W1));
    for(auto& a: A) {
        for(auto& b: a) {
            cin >> b;
        }
    }

    int H2, W2;
    cin >> H2 >> W2;
    vector<vector<int>> B(H2, vector<int>(W2));
    for(auto& a: B) {
        for(auto& b: a) {
            cin >> b;
        }
    }

    vector<vector<pair<int, int>>> F(H2, vector<pair<int, int>>(W2));
    
}
