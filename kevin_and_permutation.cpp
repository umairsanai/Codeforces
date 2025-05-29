#include <bits/stdc++.h>
using namespace std;

int main() {
  system("cls");
  int t, n, k, highest; cin >> t;
  while(t--) {
    int lowest = 1;
    cin >> n >> k;
    highest = n;
    vector<int> a;
    if (k == 1) {
      for (int i = 0; i < n; i++)
        a.push_back(i+1);
    } else {
      for (int i = 0, l = (n/k + (n%k ? 1 : 0)); (i < l && (lowest && highest)); i++) {
        for (int j = 0; j < k-1; j++)
          a.push_back(highest--);
        a.push_back(lowest++);
      }
    }
    for (int i = 0; i < n; i++)
      cout << a[i] << " ";
    cout << "\n";
  }  
  return 0;
}