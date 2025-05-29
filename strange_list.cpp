#include <bits/stdc++.h>
using namespace std;

typedef uint64_t num;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  num t, n, x; cin >> t;
  while (t--) {
      cin >> n >> x;
      num sum = 0;
      int a[n], copy[n], index = -1, flag = true;

      for (int i = 0; i < n; i++) {
        cin >> a[i];
        copy[i] = (a[i]%x ? 0 : (a[i]/x));
        sum += a[i];
      }

      while (flag) {
        for (int i = 0; i < n; i++) {
          if (copy[i] > 0) {
            sum += a[i];
            copy[i] = (copy[i]%x ? 0 : copy[i]/x);
          } else {
            flag = false;
            break;
          }
        }
      }
      printf("%lld\n", sum);
  }
  return 0;
}