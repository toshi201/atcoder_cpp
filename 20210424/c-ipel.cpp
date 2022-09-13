#include <iostream>
#include <string>

int main()
{
  int N, Q;
  std::string S;
  std::cin >> N >> S >> Q;
  bool flipped = false;
  for (int i = 0; i < Q; i++)
  {
    unsigned int T, A, B;
    std::cin >> T >> A >> B;
    if (T == 1)
    {
      if (flipped)
      {
        A = (A <= N) ? (A + N) : (A - N);
        B = (B <= N) ? (B + N) : (B - N);
      }
      char tmp = S[A - 1];
      S[A - 1] = S[B - 1];
      S[B - 1] = tmp;
    }
    else
    {
      flipped = !flipped;
    }
  }

  if (flipped)
  {
    S = S.substr(N) + S.substr(0, N);
  }
  std::cout << S << std::endl;
}