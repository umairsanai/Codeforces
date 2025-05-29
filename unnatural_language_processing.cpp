#include <bits/stdc++.h>
using namespace std;

bool V(char c) {
  return ((c == 'a' || c == 'e') ? true : false);
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int t, n; cin >> t;
  while (t--) {
      string a, b;
      cin >> n >> a;
      b += a[0];
      for (int i = 1; i < n-1; i++) {
          b += a[i];
          if (!V(a[i-1]) && V(a[i]) && !V(a[i+1]) && V(a[i+2]))
            b += '.';
          else if (!V(a[i]) && !V(a[i+1]))
            b += '.';
      }
      b += a[n-1];
      cout << b << "\n";
  }
  return 0;
}