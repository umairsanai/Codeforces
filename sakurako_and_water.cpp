#include <bits/stdc++.h>
using namespace std;

int main() {
  system("cls");
  int t, n;
  cin >> t;
  while(t--) {
    cin >> n;
    int a[n][n], moves = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++)
        cin >> a[i][j];
    }
    for (int i = 0, j = 0; j < n; j++) {
      int l = i, m = j, max = 0;
      while(l < n && m < n) {
        if (max < abs(a[l++][m++]) && a[l-1][m-1] < 0)
          max = abs(a[l-1][m-1]);
      }
      moves += max;
    }
    for (int i = 1, j = 0; i < n; i++) {
      int l = i, m = j, max = 0;
      while(l < n && m < n) {
        if (max < abs(a[l++][m++]) && a[l-1][m-1] < 0)
          max = abs(a[l-1][m-1]);
      }
      moves += max;
    }
    cout << moves << "\n";
  }  
  return 0;
}