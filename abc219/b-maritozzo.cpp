#include <iostream>
#include <string>

int main()
{
    std::string s1, s2, s3, T;

    std::cin >> s1 >> s2 >> s3 >> T;

    for (auto &x : T)
    {
        switch (x)
        {
        case '1':
            std::cout << s1;
            break;
        case '2':
            std::cout << s2;
            break;
        case '3':
            std::cout << s3;
        }
    }
    std::cout << std::endl;
}