#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;
    std::vector<int> A(N);
    for (auto& a: A) {
        std::cin >> a;

    }


    for (auto &a: A) {

        if (a % 2 == 0) {
            if ((a % 3 != 0) && (a % 5 != 0)) {
                std::cout << "DENIED" << std::endl;
                return 0;
            }
        }
    }

    std::cout << "APPROVED" << std::endl;
    return 0;
}