#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
      string a; cin >> a;
      int n = a.size(), possible = true;
      for (int i = 1; i < n; i++) {
        if (a[i-1] == a[i] && a[i] == '1') {
          for (int j = i+2; j < n; j++) {
            if (a[j-1] == a[j] && a[j] == '0') {
              possible = false;
              break;
            }
          }
          break;
        }
      }
      cout << (possible ? "YES" : "NO") << "\n";
  }
  return 0;
}