#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
  int N;
  std::cin >> N;
  std::vector<int> A(N), B(N);

  for (auto &x : A)
  {
    std::cin >> x;
  }
  for (auto &x : B)
  {
    std::cin >> x;
  }

  auto max_a = *std::max_element(A.begin(), A.end());
  auto min_b = *std::min_element(B.begin(), B.end());

  if (max_a <= min_b)
  {
    std::cout << min_b - max_a + 1 << std::endl;
  }
  else
  {
    std::cout << 0 << std::endl;
  }
}