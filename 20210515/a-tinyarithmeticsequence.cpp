#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

int main()
{
  std::vector<int> a(3);
  for (auto &x : a)
  {
    std::cin >> x;
  }
  std::sort(a.begin(), a.end());
  std::string s = ((a[2] - a[1]) == (a[1] - a[0])) ? "Yes" : "No";
  std::cout << s;
}