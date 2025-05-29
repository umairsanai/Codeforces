#include <bits/stdc++.h>
using namespace std;

typedef uint64_t num;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n, m, ans = 0;
  cin >> n >> m;
  vector<int> a(n), b(m);
  
  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int i = 0; i < m; i++)
    cin >> b[i];

  for (int i = 0, j = 0; (i < n || j < m);) {
      int sum_a = 0, sum_b = 0;
      while (true) {
        if (sum_a == sum_b && sum_a && sum_b) {
          ans++;
          sum_a = 0; sum_b = 0;
          break;
        }
        if (sum_a < sum_b) {
           if (i < n) {
             sum_a += a[i];
             i++;
           }
        } else {
          if (j < m) {
            sum_b += b[j];
            j++;
          }
        }
      }
  }
  cout << ans << "\n";
  
  return 0;
}