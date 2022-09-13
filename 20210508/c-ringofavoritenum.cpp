#include <iostream>
#include <vector>

int main()
{
  int N;
  std::cin >> N;
  std::vector<long long> B(200, 0);
  for (int i = 0; i < N; i++)
  {
    int j;
    std::cin >> j;
    B[j % 200]++;
  }

  long long count = 0;
  for (const auto &x : B)
  {
    count += (x * (x - 1)) / 2;
  }

  std::cout << count << std::endl;
}