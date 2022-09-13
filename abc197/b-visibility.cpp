#include <iostream>
#include <string>
#include <vector>

int main()
{
  int H, W, X, Y;
  std::cin >> H >> W >> X >> Y;
  X--;
  Y--;
  std::vector<std::string> S(H);
  for (auto &i : S)
  {
    std::cin >> i;
  }
  int count = 1;
  for (int i = X + 1; i < H; ++i)
  {
    if (S[i][Y] == '#')
    {
      break;
    }
    count++;
  }

  for (int i = X - 1; i >= 0; --i)
  {
    if (S[i][Y] == '#')
    {
      break;
    }
    count++;
  }

  for (int j = Y + 1; j < W; ++j)
  {
    if (S[X][j] == '#')
    {
      break;
    }
    count++;
  }

  for (int j = Y - 1; j >= 0; --j)
  {
    if (S[X][j] == '#')
    {
      break;
    }
    count++;
  }

  std::cout << count << std::endl;
}