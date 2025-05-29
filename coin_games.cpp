#include <bits/stdc++.h>
using namespace std;

bool isU(string a) {
    for (int i = 0, n = a.length(); i < n; i++) {
      if (a[i] == 'U')
          return true;
    }
    return false;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int t, n; cin >> t;
  while (t--) {
    string a, players = "ab";
    char player = players[0];
    cin >> n >> a;

    sort(a.rbegin(), a.rend());

    if (a[0] == 'D') {
      cout << "NO\n";
      continue;
    }
    if (a[n-1] == 'U') {
      cout << (n%2 ? "YES" : "NO") << "\n";
      continue;
    }
    for (int i = 0; i < n-2; i++) {
      if (!isU(a))
        break;

      if (a[i] == 'U') {
        a[i] = ' ';
        a[i+1] = (a[i+1] == 'U' ? 'D' : 'U');
        a[i+2] = (a[i+2] == 'U' ? 'D' : 'U');
        if (a[i+1] < a[i+2]) {
          char temp = a[i+1];
          a[i+1] = a[i+2];
          a[i+2] = temp;
        }
      }
      player = players[(i+1)%2];
    }
    if (a[n-2] == 'U' && a[n-1] == 'D')
        player = (player == 'a' ? 'b' : 'a');
    cout << (player == 'a' ? "NO" : "YES") << "\n";
  }
  return 0;
}