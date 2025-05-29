#include <bits/stdc++.h>
using namespace std;
typedef uint64_t bnum;
 
int main() {
  system("cls");
  int t, n, m; cin >> t;
  while(t--) {
    cin >> n >> m;
    bnum sum = 0;
    bnum a[n][m], n_m = n*m, c = 0;
    vector<vector<bnum>> sums(n,vector<bnum>(2));
 
    for (int i = 0; i < n; i++) {
      sums[i][1] = i;
      for (int j = 0; j < m; j++) {
        cin >> a[i][j];
        sums[i][0] += a[i][j];
      }
    }

    sort(sums.begin(), sums.end());
    int size = sums.size()-1;

    for (int i = 0; i < n; i++) {
      int maxIndex = sums[size--][1];
      for (int j = 0; j < m; j++) {
        sum += (a[maxIndex][j] * (n_m-c++));
      }
    }
    cout << sum << "\n";
  }
  return 0;
}