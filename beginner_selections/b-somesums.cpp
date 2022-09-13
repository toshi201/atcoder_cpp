#include <iostream>
#include <string>

int main()
{
  int N, A, B;
  std::cin >> N >> A >> B;

  auto func = [A, B](std::string S)
  {
    int sum = 0;
    for (const char &c : S)
    {
      sum += static_cast<int>(c);
    }

    return sum >= A && sum <= B;
  };

    for (int i = 1; i <= N; ++i)
  {
    std::string int_str = std::to_string(i);
  }
}