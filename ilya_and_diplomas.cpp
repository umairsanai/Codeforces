#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int a, b, c, n, min1, max1, min2, max2, min3, max3;
  cin >> n >> min1 >> max1 >> min2 >> max2 >> min3 >> max3;

  a = ((n-min2-min3) > max1 ? max1 : (n-min2-min3));
  b = ((n-a-min3) > max2 ? max2 : (n-a-min3));
  c = ((n-a-b) > max3 ? max3 : (n-a-b));
  cout << a << " " << b << " " << c << "\n";

  return 0;
}