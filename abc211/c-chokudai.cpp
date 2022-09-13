#include <iostream>
#include <string>

int main()
{
  std::string S;
  const std::string chokudai = "chokudai";
  std::cin >> S;

  for (char &x : S)
  {
    std::cout << x << std::endl;
  }
}