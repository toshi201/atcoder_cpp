#include <iostream>

int main()
{
  int A, B;
  std::cin >> A >> B;

  double C = (A - B) / 3.0 + B;

  std::cout << C << std::endl;
}