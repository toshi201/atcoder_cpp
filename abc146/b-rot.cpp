#include <iostream>
#include <string>

int main() {
    int N;
    std::string S;
    std::cin >> N >> S;

    for (auto& s: S) {
        int x = s - 'A';
        x = (x + N) % 26;
        printf("%c", char(x + 'A'));
    }

    std::cout << std::endl;
    return 0;
}