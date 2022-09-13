#include <iostream>

int main()
{
  int a, b, c;
  std::cin >> a >> b >> c;
  if (a == b && b == c)
  {
    std::cout << a << std::endl;
    return 0;
  }

  if (a == b)
  {
    std::cout << c << std::endl;
    return 0;
  }

  if (b == c)
  {
    std::cout << a << std::endl;
    return 0;
  }

  if (a == c)
  {
    std::cout << b << std::endl;
    return 0;
  }

  std::cout << 0 << std::endl;
}