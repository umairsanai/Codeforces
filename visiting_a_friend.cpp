#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  system("cls");

  int n, m, x, y, possible = -1; cin >> n >> m;
  vector<bool> positions(m+1, false);
  
  for (int i = 0; i < n; i++) {
      cin >> x >> y;    
      if (y == m) {
        y++;
      }
      for (int j = x; j < y; j++)
        positions[j] = true;
  }
  for (int i = 0; i <= m && possible; i++) {
    possible = positions[i];
  }  
  cout << (possible ? "YES" : "NO") << "\n"; 
   
  return 0;
}