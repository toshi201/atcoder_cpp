#include <iostream>

int main()
{
  long long int N;
  int K;
  std::cin >> N >> K;
  for (int i = 0; i < K; i++)
  {
    if (N % 200 == 0)
    {
      N /= 200;
    }
    else
    {
      N *= 1000;
      N += 200;
    }
  }
  std::cout << N << std::endl;
}