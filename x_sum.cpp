#include <bits/stdc++.h>
using namespace std;

int main() {
  system("cls");

  int t, n, m; cin >> t;
  while (t--) {
      cin >> n >> m;
      int a[n][m], max = 0;
      vector<int> left_diagonals(n+m-1,0), right_diagonals(n+m-1,0);

      for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
          cin >> a[i][j];
          left_diagonals[n+j-i-1] += a[i][j];
          right_diagonals[m+n-i-j-2] += a[i][j];
        }
      }
      for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
          int sum = left_diagonals[n+j-i-1] + right_diagonals[m+n-i-j-2] - a[i][j];
          if (max < sum)
            max = sum;
        }
      }
      cout << max << "\n";
  }

  return 0;
}