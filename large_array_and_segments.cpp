#include <bits/stdc++.h>
using namespace std;

typedef uint64_t num;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  system("cls");

  num t, n, k, x; cin >> t;

  while (t--) {

      cin >> n >> k >> x;
      int a[n];
      num sum = 0, sums[n];
      num positions = 0;
      for (num i = 0; i < n; i++) {
          cin >> a[i];
          sum += a[i];
      }
      for (int j = n-1; j >= 0; j--)
        sums[j] = ((j == n-1) ? a[n-1] : (a[j] + sums[j+1]));
      if (sum*k >= x) {
        bool found = false;
        if (sum == x) { 
          positions = n*k-n+1;
        } else {
            if (x%sum) {
              positions = n*k - (x/sum * n);
              for (int j = n-1; j >= 0; j--) {
                if (sums[j] + (x/sum)*sum < x) {
                  positions--;
                } else {
                  break;  
                }
              }
            } else {
              positions = n*k - (x/sum * n) + 1;
            }
          }
      }
      cout << positions << "\n";
  }
  return 0;
}