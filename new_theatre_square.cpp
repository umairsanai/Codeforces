#include <bits/stdc++.h>
using namespace std;

typedef uint64_t num;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  system("cls");

  int t; cin >> t;

  while (t--) {
      int n, m, x, y, price = 0;
      cin >> n >> m >> x >> y;
      vector<vector<char>> a(n, vector<char> (m));

      for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
          cin >> a[i][j];
      }
      for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
          if (j < m-1 && a[i][j] == a[i][j+1] && a[i][j] == '.') {
              price += min(2*x, y);
              j++;
          } else if (a[i][j] == '.') {
              price += x;
          }
        }
      }
      cout << price << "\n";
  }
  return 0;
}