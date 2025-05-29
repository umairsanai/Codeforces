#include <bits/stdc++.h>
using namespace std;

typedef uint64_t bnum;

int main() {
  system("cls");

  int t; cin >> t;
  while (t--) {
      bnum n, size;
      cin >> n;
      bool possible = true;
      vector<bnum> a(n);
      size = a.size();

      for (int i = 0; i < n; i++) {
        cin >> a[i];  
      }

      sort(a.begin(), a.end());
      vector<bnum> sums(n, 1);

      for (bnum i = 1; i < n; i++) {
        sums[i] = a[i] + sums[i-1];
      }

      if (size == 1) {
        if (a[0] != 1)
          possible = false;
      } else {
        if (a[0] != 1 || a[1] != 1) {
          possible = false;
        } else {
          for (int i = 1; i < n-1; i++) {
            if (a[i+1] > sums[i]) {
              possible = false;
              break;
            }
          }
        }
      }
      cout << (possible ? "YES" : "NO") << "\n";


  }

  return 0;
}