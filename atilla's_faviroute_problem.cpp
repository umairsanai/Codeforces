#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int t; cin >> t;
  while (t--) {
      int n, max = 0;
      string a;
      cin >> n >> a;
      for (int i = 0; i < n; i++) {
        if (max <= a[i]-'a')
          max = a[i] - 'a' + 1;
      }
      cout << max << "\n";
  }
  return 0;
}