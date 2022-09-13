#include <iostream>
#include <string>

int main() {
    std::string S;
    std::cin >> S;

    for (auto &s: S) {
        std::cout << "x";
    }
    std::cout << std::endl;
    return 0;
}