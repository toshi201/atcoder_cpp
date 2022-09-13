#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
  int N, K;
  std::cin >> N >> K;
  std::vector<std::pair<long long, int>> A(N);

  for (auto &x : A)
  {
    std::cin >> x.first >> x.second;
  }

  std::sort(A.begin(), A.end());

  long long current = 0;
  long long index = 0;
  long long money = K;
  while (1)
  {

    int fee = A[index].first - current;
    if (money - fee <= 0)
    {
      std::cout << current + money << std::endl;
      return 0;
    }

    money = money - (A[index].first - current);
    }
}