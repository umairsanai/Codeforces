#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  system("cls");

  int n; cin >> n;
  vector<int> a(n);
  vector<vector<int>> indexes(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
    indexes[a[i]-1].push_back(i);
  }
  
  int score = 0;
  for (int i = 0; i < n; i++) {
      if (indexes[a[i]-1][0] >= i) {
        for (int j = n-1; j > i; j--) {
            if (a[i] != a[j]) {
                score = (score < (j-i) ? (j-i) : score);
                break;
            }
        }
      }
  }
  cout << score << "\n";  
  return 0;
}