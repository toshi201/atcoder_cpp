#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main()
{
  vector<int> v(3);
  for (auto &x : v)
  {
    cin >> x;
  }

  transform(begin(v), end(v), begin(v),
            [](auto x)
            { return 7 - x; });

  cout << accumulate(begin(v), end(v), 0) << endl;
}