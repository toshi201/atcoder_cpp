#include <iostream>
#include <string>

int main()
{
  int N;
  std::cin >> N;
  std::string S;
  std::cin >> S;

  const char one = '1';

  for (int i = 0; i < N; ++i)
  {
    if (S[i] == one)
    {
      if (i % 2 == 0)
      {
        std::cout << "Takahashi" << std::endl;
      }
      else
      {
        std::cout << "Aoki" << std::endl;
      }
      return 0;
    }
  }
}