#include <bits/stdc++.h>
using namespace std;

bool isBinary(string a) {
  for (int i = 1, n = a.length(); i < n; i++) {
     if (a[i-1] == a[i])
        return false;
  }
  return true;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int t, n; cin >> t;
  while (t--) {
    string a;
    char c, x;
    cin >> n >> a;
    for (int i = 0; i < n; i++) {
      x = i%2 ? '0' : '1';
      if (a[i] == '0' || a[i] == '1')
        continue;
      c = a[i];
      a[i] = x;
      for (int j = i; j < n; j++) {
        if (a[j] == c) {
          a[j] = x;
        }
      }
    }
    cout << (isBinary(a) ? "YES" : "NO") << "\n";
  }
  return 0;
}