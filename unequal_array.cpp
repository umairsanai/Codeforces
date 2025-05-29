#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  system("cls");
  int t, n; cin >> t;
  while (t--) {
    cin >> n;
    vector<int> a(n);
    int operations = 0, ans = 0, start = 0, end = -1;

    for (int i = 0; i < n; i++)
      cin >> a[i];
    
    for (int i = 0; i < n-1; i++) {
        if (a[i] == a[i+1]) {
          start = i+1;
          break;
        }
    }
    for (int i = n-1; i >= 1; i--) {
        if (a[i-1] == a[i]) {
          end = i-1;
          break;
        }
    }
    if (end == start) {
      ans = 1;
    } else if (end > start) {
      ans = (end-start);
    }
    cout << ans << "\n";  
  }
  return 0;
} 