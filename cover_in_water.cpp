#include <bits/stdc++.h>
using namespace std;

int main() {
  int t, n; cin >> t;
  while (t--)
  {
    string a;
    cin >> n >> a;
    int action_count = 0;
    for (int i = 0; i < n-2; i++) {
      if (a[i] == a[i+1] && a[i+1] == a[i+2] && a[i] == '.') {
        action_count = 2;
        break;
      }
    }
    if (action_count != 2) {
      for (int i = 0; i < n; i++) {
        if (a[i] == '.')
          action_count++;
      }
    }
    cout << action_count << "\n";
  }
  return 0;
}