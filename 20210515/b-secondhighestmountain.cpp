#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

int main()
{
  int N;
  std::cin >> N;
  std::vector<std::pair<int, std::string>> data(N);

  for (auto &x : data)
  {
    std::cin >> x.second >> x.first;
  }

  std::sort(data.begin(), data.end(), std::greater{});
  std::cout << data[1].second << std::endl;
}