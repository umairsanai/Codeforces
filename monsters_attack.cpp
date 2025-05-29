#include <bits/stdc++.h>
using namespace std;

int main() {
  system("cls");

  int t, n, k; cin >> t;
  while (t--) {
    cin >> n >> k;
    vector<vector<int>> a(n, vector<int> (2));
    
    for (int i = 0; i < n; i++)
    cin >> a[i][1];
    
    for (int i = 0; i < n; i++) {
      cin >> a[i][0];
      a[i][0] = abs(a[i][0]);
    }
    sort(a.begin(), a.end());

    bool possible = true;
    int min_index = 0;
    int decreased = 0;
    
    while (possible && (min_index < n)) {
      int sum = 0, bullets = k;

      if (!(a[min_index][0]-decreased)) {
        possible = false;
        continue;
      }

      for (int i = min_index; (bullets && i < n && min_index < n); i++) {
        if (bullets >= a[i][1]) {
          bullets -= a[i][1];
          min_index++;
        } else {
          a[i][1] -= bullets;
          bullets = 0;
        }                
      }
      decreased++;
    }
    cout << (possible ? "YES" : "NO") << "\n";   
  }
  return 0;
}