#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n, hashes = 0; cin >> n;
  string ans;
  vector<vector<char>> a(n, vector<char> (n));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> a[i][j];
      if (a[i][j] == '#')
        hashes++;
    }
  }
  if (!(hashes%5)) {
    for (int i = 1; i < n-1; i++) {
        for (int j = 1; j < n-1; j++) {
            if (a[i][j-1] == a[i][j] && a[i][j] == a[i][j+1] && 
                a[i-1][j] == a[i+1][j] && a[i+1][j] == a[i][j] && 
                a[i][j] == '#') 
            { 
                a[i][j-1] = '.';
                a[i][j] = '.';
                a[i][j+1] = '.';
                a[i-1][j] = '.';
                a[i+1][j] = '.';
                hashes -= 5;
            }
        }
    }
    if (hashes) {
      ans = "NO";
    } else {
      ans = "YES";
    }
  } else {
    ans = "NO";
  }
  cout << ans << "\n";
  return 0;
}