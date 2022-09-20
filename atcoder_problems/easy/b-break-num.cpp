#include<iostream>
using namespace std;

int main() {
    int N; cin >> N;
    int ans = 1;
    int max_break = 0;
    for(int i = 1; i <= N; ++i) {
        int cur_break = 0;
        int cur_num = i;
        while(cur_num % 2 == 0) {
            cur_num /= 2;
            cur_break++;
        }
        if (max_break < cur_break) {
            max_break = cur_break;
            ans = i;
        }
    }
    cout << ans << endl;
}