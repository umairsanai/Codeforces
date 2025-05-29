#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int t; cin >> t;
  while (t--) {
      int n, m, max_hash = 0, hash_per_line = 0, x, y, max_hash_line_index = 0;
      cin >> n >> m;
      string a[n];
      for (int i = 0; i < n; i++)
          cin >> a[i];
      for (int i = 0; i < n; i++) {
          for (int j = 0; j < m; j++) {
              if (a[i][j] == '#') {
                hash_per_line++;
                x = i + 1;
                y = j + 1;
              }
          }
          if (max_hash < hash_per_line) {
            max_hash = hash_per_line;
            max_hash_line_index = i;
          }
          hash_per_line = 0;
      }
      if (max_hash == 1) {
        cout << x << " " << y << "\n";
        continue;
      }
      for (int i = 0; i < m; i++) {
        if (a[max_hash_line_index][i] == '#'){
          x = max_hash_line_index + 1; 
          y = i + max_hash/2 + 1;
          break;
        }                                    
      }
      cout << x << " " << y << "\n";
  }
  return 0;
}