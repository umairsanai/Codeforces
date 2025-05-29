#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int a, b, x, y, n; cin >> a >> b >> x >> y >> n;
  int _max = 0, _min = 0, copy_n = n;

  if (x > y) {
    x ^= y ^= x ^= y;
    a ^= b ^= a ^= b;     
  }

  _max += min(copy_n/x, a);
  copy_n -= _max*x;
  if (copy_n > 0) {
      _max += min(copy_n/y, b);   
  }

  copy_n = n;
  copy_n -= ((y-1)*b + (x-1)*a);
  if (copy_n > 0) {
    _min += min(a+b, copy_n);
  }

  cout << _min << " " << _max << "\n";
  return 0;
}