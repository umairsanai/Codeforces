#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int t, n, m; cin >> t;
  while (t--) {
    cin >> n >> m;
    bool c[4] = {false, false, false, false};
    string inputs[n], spell;
   
    for (int i = 0; i < n; i++)
      cin >> inputs[i];
  
    for (int j = 0; j < m; j++) {
      for (int i = 0; i < n; i++) {
          if (!c[0] && inputs[i][j] == 'v') {
            c[0] = true;
            break;
          }
          if (c[0] && !c[1] && inputs[i][j] == 'i') {
            c[1] = true;
            break;
          }
          if (c[0] && c[1] && !c[2] && inputs[i][j] == 'k'){
            c[2] = true;
            break;
          }
          if (c[0] && c[1] && c[2] && !c[3] && inputs[i][j] == 'a') {
            c[3] = true;
            break;
          }  
      }
    }
  
    cout << ((c[0] && c[1] && c[2] && c[3]) ? "YES" : "NO") << "\n";
  }    
  return 0;
}