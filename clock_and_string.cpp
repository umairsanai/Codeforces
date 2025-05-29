#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int t; cin >> t;

  while (t--) {
      int a,b,c,d;
      cin >> a >> b >> c >> d;
      bool is_C_between = false, is_D_between = false;

      if (b > a){
        int temp = a;
        a = b;
        b = temp;
      }

      if (c > d) {
        int temp = c;
        c = d;
        d = temp;
      }
      if (c < a && c > b)
          is_C_between = true;
      if ((d < a && d > b))
          is_D_between = true;
      if ((is_C_between && !is_D_between) || (!is_C_between && is_D_between)) {
         cout << "YES\n";
      } else {
        cout << "NO\n";
      }
  }
  return 0;
}