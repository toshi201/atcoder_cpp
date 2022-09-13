#include<iostream>
#include<string>

int main() {
    int N;
    std::string S;
    std::cin >> N;
    std::cin >> S;

    int ans = 0;
    for (int i = 0; i < N - 2; ++i) {
        if (S.substr(i, 3) == "ABC") {
            ++ans;
        }
    }

    std::cout << ans << std::endl;
}