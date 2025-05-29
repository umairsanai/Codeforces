#include <bits/stdc++.h>
using namespace std;

typedef uint64_t num;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  system("cls");

  int t; cin >> t;

  while (t--) {

      int64_t a, b, c, d, x, y, x1, x2, y1, y2;
      cin >> a >> b >> c >> d >> x >> y >> x1 >> y1 >> x2 >> y2;
      bool possible = true;

      if (((a || b) && !(x2-x1)) || ((c || d) && !(y2-y1))) {
        possible = false;
      } else {
        if (a > b) {
            if (a-b > x-x1) {
              possible = false;
            }
          } else {
            if (b-a > abs(x2-x)) {
              possible = false;
            }
          }
          if (c > d) {
            if (c-d > abs(y-y1)) {
              possible = false;
            }
        } else {
            if (d-c > abs(y2-y)) {
              possible = false;
            }
        }
      }
      cout << (possible ? "Yes" : "No") << "\n";

  }
  return 0;
}