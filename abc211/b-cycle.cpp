#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{

  std::vector<std::string> S(4);
  std::vector<std::string> A{"H", "2B", "3B", "HR"};

  for (auto &x : S)
  {
    std::cin >> x;
  }

  for (auto &x : A)
  {
    auto result = std::find(S.begin(), S.end(), x);
    if (result == S.end())
    {
      std::cout << "No" << std::endl;
      return 0;
    }
  }
  std::cout << "Yes" << std::endl;
}