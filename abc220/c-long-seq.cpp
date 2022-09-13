#include <iostream>
#include <vector>
#include <numeric>

int main()
{
    int N;
    long long X;

    std::cin >> N;
    std::vector<int> A(N);
    for (auto &a : A)
    {
        std::cin >> a;
    }
    std::cin >> X;

    long long sumA = std::accumulate(std::cbegin(A), std::cend(A), 0);
    auto K = (X / sumA) * N;
    int cur_sum = (X % sumA);
    for (auto &x : A)
    {
        if (cur_sum < 0)
        {
            std::cout << K << std::endl;
            return 0;
        }
        cur_sum -= x;
        K++;
    }
}