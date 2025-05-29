#include <bits/stdc++.h>
using namespace std;
int main() {
  system("cls");

  int t; cin >> t;
  while(t--) {
    int n, m, moves = 0, temp;
    cin >> n >> m;
    vector<bool> rows(n,false); 
    vector<bool> columns(m,false);
    int a[n][m];

    for (int i = 0; i < n; i++) {
      bool allZeroes = true;
      for (int j = 0; j < m; j++) {
        cin >> a[i][j];
        if (a[i][j] != 0)
          allZeroes = false;
      }
      if (allZeroes)
        rows[i] = true;
    }
    for (int i = 0; i < m; i++) {
      bool allZeroes = true;
      for (int j = 0; j < n; j++) {
          if (a[j][i] != 0) {
            allZeroes = false;
            break;
          }
      }
      if (allZeroes) 
        columns[i] = true;
    }
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (rows[i] && columns[j]) {
          columns[j] = false;
          moves++;
          break;
        }
      }
    }
    cout << ((moves%2) ? "Ashish" : "Vivek") << "\n";
  }
  return 0;
}