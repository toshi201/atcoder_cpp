#include <iostream>
#include <string>

long long base(std::string A, int K)
{
    long long A2 = 0;
    for (auto &x : A)
    {
        A2 *= K;
        A2 += static_cast<int>(x - '0');
    }
    return A2;
}

int main()
{
    int K;
    std::string A, B;
    std::cin >> K;
    std::cin >> A >> B;

    std::cout << base(A, K) * base(B, K) << std::endl;
}