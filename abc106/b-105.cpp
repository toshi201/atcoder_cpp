#include<iostream>

int main() {
    int N;
    std::cin >> N;

    int ans = 0;
    for (int i = 1; i <= N; ++i) {
        if (i % 2 == 0) {
            continue;
        }


        int yaku = 0;
        for (int j = 1; j <= i; ++j) {
            if (i % j == 0) {
                ++yaku;
            }
        }
        if (yaku == 8) {
            ++ans;
        }
    }

    std::cout << ans << std::endl;
    return 0;
}