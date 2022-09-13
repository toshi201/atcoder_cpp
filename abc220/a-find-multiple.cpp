#include <iostream>

int main()
{
    int A, B, C;
    std::cin >> A >> B >> C;
    for (int i = A; i <= B; i++)
    {
        if (i % C == 0)
        {
            std::cout << i << std::endl;
            return 0;
        }
    }

    std::cout << -1 << std::endl;
}