#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int a, b, c, d, ans; cin >> a >> b >> c >> d;
  ans = ((a == d) ? ((a == 0 && c != 0) ? 0 : 1) : 0);
  cout << ans << "\n";
  return 0;
}