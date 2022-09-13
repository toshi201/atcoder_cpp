#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{

  string str;
  cin >> str;
  reverse(begin(str), end(str));

  for (char &c : str)
  {
    switch (c)
    {
    case '6':
      c = '9';
      break;
    case '9':
      c = '6';
      break;
    default:
      break;
    }
  }

  cout << str << endl;
}