#include <bits/stdc++.h>
using namespace std;

int main() {
  system("cls");
  int t; cin >> t;
  while(t--) {
    string a, ans;
    cin >> a;
    int n = a.length();
    for (int i = 1; i < n; i++) {
      if (a[i-1] == a[i]) {
        ans += a[i-1];
        ans += a[i];
        break;
      }
    }
    if (!ans.length()) {
      for (int i = 1; i < n-1; i++) {
        if (a[i-1] != a[i] && a[i] != a[i+1] && a[i-1] != a[i+1]) {
          ans += a[i-1];
          ans += a[i];
          ans += a[i+1];
          break;
        }
      }
    }
    cout << (!ans.length() ? "-1" : ans) << "\n";
  }  
  return 0;
}