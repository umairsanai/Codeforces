#include <bits/stdc++.h>
using namespace std;

typedef uint64_t bignum;

int main() {
  system("cls");

  int t, n; cin >> t;
  while (t--) {
      cin >> n;
      int a[n], b[n+1];
      for (int i = 0; i < n; i++) 
        cin >> a[i];
      for (int i = 0; i <= n; i++)
        cin >> b[i];
      bignum operations = 0;
      bool last_settled = false;
      for (int i = 0; i < n; i++) {
        operations += abs(b[i]-a[i]);
        if (!last_settled && ((a[i] < b[i] && a[i] <= b[n] && b[n] <= b[i]) || (a[i] > b[i] && a[i] >= b[n] && b[n] >= b[i]))) {
          last_settled = true;
          operations++;
        } 
      }
      int minimum = abs(b[n] - a[0]);
      if (!last_settled) {
        for (int i = 0; i < n; i++) {
          if (minimum > abs(b[n]-a[i])) {
            minimum = abs(b[n]-a[i]);
          }
          if (minimum > abs(b[n]-b[i])) {
            minimum = abs(b[n]-b[i]);
          }
        }
        operations += (minimum + 1);
      }
      cout << operations << "\n";
  }

  return 0;
}