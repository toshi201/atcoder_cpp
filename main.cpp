#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
  long long n;
  cin >> n;
  long long ans = 0;
  if (n >= 1000)
  {
    ans += n - 999;
  }

  if (n >= 1000000)
  {
    ans += n - 999999;
  }

  if (n >= 1000000000)
  {
    ans += n - 999999999;
  }

  if (n >= 1000000000000)
  {
    ans += n - 999999999999;
  }
  cout << ans << endl;
}

//auto s = ((a * b % 2) == 0) ? "Even" : "Odd";

// cout << "hello" << endl;
// const vector<int> v{1, 2, 3, 5, 9, 4, 10};
// for (const auto &num : v)
// {
//   cout << num << endl;
// }
//for_each(c.begin(), c.end(), [](const auto &n) { cout << n << endl; });

// auto devide = [](int x) -> int { return x / 2; };
//   auto is_even = [](int x) -> auto { return x % 2 == 0; };
//   auto count = 0;
//   while (all_of(c.begin(), c.end(), is_even))
//   {
//     transform(c.begin(), c.end(), c.begin(), devide);
//     count++;
//   }

// int N;
// cin >> N;
// vector<int> c(N);

// for (int i = 0; i < N; i++)
//   {
//     cin >> a.at(i);
//     cin >> b.at(i);
//   }
//   transform(begin(a), end(a), begin(b), begin(c), plus<int>());
//   auto a_min = min_element(begin(a), end(a));
//   auto a_min_index = distance(begin(a), a_min);

//   for (const auto &n : c)
//   {
//     cout << n << endl;
//   }

//   cout << *a_min << endl;
//   cout << a_min_index << endl;

// cout << count << endl;
// for (const auto &n : c)
// {
//   cout << n << endl;
// }