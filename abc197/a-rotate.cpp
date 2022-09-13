#include <iostream>
#include <string>

int main()
{
  std::string S;
  std::cin >> S;
  std::cout << S.substr(1) << S[0] << std::endl;
}