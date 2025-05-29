#include <bits/stdc++.h>
using namespace std;

int main() {

  int t; cin >> t;
  while (t--) {
      int n, k, pos = -1;
      cin >> n >> k;
      vector<int> a(n);
      for (int i = 0; i < n; i++)
        cin >> a[i];

      if (n > 1) {
        if (a[0] < a[1]) {
          if (k > (a[1]-a[0])) {
            k -= (a[1]-a[0]);
            a[0] = a[1];
          } else {
            pos = 1;
          }
        }
      }
      if (pos == -1) {
        for (int i = 2; i < n; i++) {
            while (a[i-1] < a[i] && pos == -1) {
              if (k > 1) {
                a[i-1]++;
                k--;
              } else {
                pos = i;
                break;
              }
              for (int j = i-2; j >= 0; j--) {
                  if (a[j] < a[i-1]) {
                    if (k > 1) {
                      a[j]++;
                      k--;
                    } else {
                      pos = j+1;
                      break;
                    }
                  }
              }
            }
            if (pos != -1) {
              break;
            }
        }
      }      
      cout << pos << "\n";
  }
  return 0;
}