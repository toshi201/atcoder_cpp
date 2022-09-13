#include <iostream>
#include <vector>
#include <numeric>

int main() {
    int N, K, M;
    std::cin >> N >> K >> M;

    std::vector<int> A(N - 1);

    for (auto& a: A) {
        std::cin >> a;
    }


    int x = N * M - std::reduce(A.begin(), A.end());
    if (x > K) {
        std::cout << -1 << std::endl;
    } else if(x < 0) {
        std::cout << 0 << std::endl;
    } else {
        std::cout << x << std::endl;
    }
}