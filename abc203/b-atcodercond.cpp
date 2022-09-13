#include <iostream>

int main()
{
  int N, K;
  std::cin >> N >> K;
  int sum = 0;
  for (int i = 1; i <= N; i++)
  {
    for (int j = 1; j <= K; j++)
    {
      sum += 100 * i + j;
    }
  }
  std::cout << sum << std::endl;
}