#include <bits/stdc++.h>
using namespace std;

int main() {
  system("cls");
  int t; cin >> t;
  while(t--) {
    string ans;
    int n;
    uint64_t x = 0;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
      cin >> a[i];
      x += a[i];
    }
    
    if (x%n)
    ans = "NO";
    else {
      x /= n;
      for (int i = 1; i < n-1; i++) {
        if (a[i-1] >= x) {
          int difference = a[i-1] - x;
          a[i-1] -= difference;
          a[i+1] += difference;
        } else {
          int difference = x - a[i-1];
          a[i-1] += difference;
          a[i+1] -= difference;
        }
      }
      for (int i = 1; i < n; i++) {
        if (a[i-1] != a[i])
          ans = "NO";
      }
      if (ans != "NO")
        ans = "YES";
    }
    cout << ans << "\n";
  }
  return 0;
}