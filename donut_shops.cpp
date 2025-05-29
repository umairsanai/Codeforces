#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  system("cls");

  int t; cin >> t;
  while (t--) {
      int64_t a, b, c, l, m;
      cin >> a >> b >> c;
      m = ((b*a <= c) ? -1 : (1000000000 - 1000000000%b));
      l = ((a >= c) ? -1 : 1);
      cout << l << " " << m << "\n";
  }
  return 0;
}