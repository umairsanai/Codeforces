#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;
  while(t--) {
    int n, m;
    cin >> n >> m;
    int move[n][2], x = m, y = m;
    for (int i = 0; i < n; i++) {
      cin >> move[i][0] >> move[i][1];
      if (i != 0) {
        x += move[i][0];
        y += move[i][1];
      }
    }
    cout <<  2*x + 2*y << "\n";
  } 
  return 0;
}