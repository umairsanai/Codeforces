#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;

  while (t--) {
      int n, m, k; 
      cin >> n >> m >> k;
      int a[m], q[k], unknown_ans[n] = {0};
      char output[m];

      for (int i = 0; i < m; i++) {
        cin >> a[i];
        output[i] = '0';
      }
      for (int i = 0; i < k; i++) {
        cin >> q[i];
      }
      if (k == n || k < n-1) {
        for (int i = 0; i < m; i++) {
          cout << ( k == n ? "1" : "0");
        }
        cout << "\n";
        continue;
      } 

      for (int i = 1, j = 0; i <= n; i++) {
        if (i != q[j] && j < k)
          unknown_ans[i-1] = i;
        else
          j++;
      } 
      for (int i = q[k-1] + 1; i <=n; i++) {
        unknown_ans[i-1] = i;
      }

      for (int i = 0; i < m; i++) {
        if (a[i] == unknown_ans[a[i]-1])
          output[i] = '1';
          output[i] = '0';
      }
      for (int i = 0; i < m; i++)
        cout << output[i];
      cout << "\n";
  }  

  return 0;
}