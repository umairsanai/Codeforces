#include <bits/stdc++.h>
using namespace std;

int main() {
  system("cls");
  int t, n , m; cin >> t;
  while(t--) {
    cin >> n >> m;
    string ans;
    vector<vector<int>> a(n, vector<int>(m));
    vector<int> indexes(n*m, 0);
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cin >> a[i][j];
        indexes[a[i][j]] = i;
      }
    }
    for (int i = 0; i < n; i++) {
      ans += to_string(indexes[i] + 1);
      ans += ' ';
    }

    for (int i = n, nums = n*m; i < nums; i+=n) {
      string temp;
      for (int j = 0; (j < n && (i + j) < nums); j++) {
        temp += to_string(indexes[i + j] + 1);
        temp += ' ';
      }
      if (temp != ans && m != 1) {
        ans = "-1";
        break;
      }
    }
    cout << ans << "\n";
  }
  return 0;
}