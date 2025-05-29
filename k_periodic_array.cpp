#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n, k, moves = 0; cin >> n >> k;
  vector<int> a(n);
  vector<vector<int>> subarr(n/k, vector<int> (k, 0));

  for (int i = 0; i < n; i++)
      cin >> a[i];
  for (int i = 0; i < n; i++) {
      for (int j = i, x = 0; (x < k && j < n && j < i+k); j++, x++) {
          subarr[i/k][x] = a[j];
      }
      i += (k-1);
  }
  for (int i = 0; i < k; i++) {
      int ones = 0, twos = 0;
      for (int j = 0; j < n/k; j++) {
          if (subarr[j][i] == 1) {
            ones++;
          } else {
            twos++;
          }
      }
      moves +=  min(ones, twos);
  }
  cout << moves << "\n";
  return 0;
}