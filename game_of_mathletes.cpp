#include <bits/stdc++.h>
using namespace std;

int main() {
  system("cls");
  int t; cin >> t;
  while (t--) {
    int n, k, score = 0, temp, required;
    cin >> n >> k;
    vector<vector<int>> a(n);

    for (int i = 0; i < n; i++) {
      cin >> temp;
      a[temp-1].push_back(temp);
    }

    for (int i = 0; i < n; i++) {
      if (a[i].size()) {
        required = k - a[i][0];
        if ((required-1) >= 0 && required <= n && a[required-1].size()) {
          score += min(a[required-1].size(), a[i].size());
        }
      }
    }
    cout << score/2 << "\n";
  }

  
  return 0;
}