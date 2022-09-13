#include <iostream>
#include <string>
#include <iterator>
#include <regex>

int main()
{
  std::string S;
  std::cin >> S;
  std::regex re(R"(ZONe)");

  for (std::sregex_iterator it(S.begin(), S.end(), re), end; it != end; ++it)
  {
    auto &&m = *it;
    std::cout << m.position() << std::endl;
  }
}