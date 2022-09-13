#include <iostream>
#include <vector>

int main()
{
  int n;
  std::cin >> n;
  std::vector<int> a(n), b(n), c(n);
  for (auto &x : a)
  {
    std::cin >> x;
    x--;
  }
  for (auto &x : b)
  {
    std::cin >> x;
    x--;
  }
  for (auto &x : c)
  {
    std::cin >> x;
    x--;
  }

  std::vector<int> count(n, 0);

  for (int i = 0; i < n; i++)
  {
    count[b[c[i]]]++;
  }

  long long ans = 0;
  for (int i = 0; i < n; i++)
  {
    ans += count[a[i]];
  }

  std::cout << ans << std::endl;
}