#include <bits/stdc++.h>
using namespace std;

int main()
{
  int test_cases;
  cin >> test_cases;
  while (test_cases--)
  {
      string a, b;
      cin >> a >> b;
      char temp = a[0];
      a[0] = b[0];
      b[0] = temp;
      cout << a << " " << b << endl;
  }
  return 0;
}