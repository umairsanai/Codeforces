#include <bits/stdc++.h>
using namespace std;

typedef uint64_t num;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  system("cls");

  int t, n; cin >> t;

  while (t--) {

      cin >> n;
      vector<int> a(n), b(n);
      bool possible = true;

      int last_pos_index = n, last_neg_index = n;

      for (int i = 0; i < n; i++)
          cin >> a[i];
      for (int i = 0; i < n; i++)
          cin >> b[i];

      if (a[0] != b[0]) {
        possible = false;
      } else {
        for (int i = 0; i < n; i++) {
            bool found = false;
            if (a[i]-b[i] < 0) 
            {
              if (last_pos_index >= i) {
                for (int j = 0; j < i; j++) {
                    if (a[j] > 0) {
                        last_pos_index = i;
                        found = true;
                        break;
                    }
                }
              } else {
                found = true;
              }
            } else if (a[i]-b[i] > 0) {
              if (last_neg_index >= i) {
                for (int j = 0; j < i; j++) {
                    if (a[j] < 0) {
                      last_neg_index = i;
                      found = true;
                      break;
                    }
                }
              } else {
                found = true;
              }
            } else {
              found = true;
            }
            if (!found) {
              possible = false;
              break;
            }
        }
      }
      cout << (possible ? "YES" : "NO") << "\n";
  }
  return 0;
}