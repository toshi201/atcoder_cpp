#include<iostream>

int main() {
    int N;
    std::cin >> N;

    for (int i = 1; i <= 9; ++i) {
        int a;
        if (N % i == 0) {
            a = N / i;
            if (a >= 1 && a <= 9) {
                std::cout << "Yes" << std::endl;
                return 0;
            }
        }
    }

    std::cout << "No" << std::endl;
    return 0;
}