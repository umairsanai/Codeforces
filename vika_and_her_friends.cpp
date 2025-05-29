#include <bits/stdc++.h>
using namespace std;

int main() {
  system("cls");

  int t; cin >> t;
  while(t--) {
    int n, m, k, x, y, a, b, even, possible = 1, sum;
    cin >> n >> m >> k;
    cin >> x >> y;
    even = (!((x+y)%2) ? 1 : 0);
    for (int i = 0; i < k; i++) {
      cin >> a >> b;
      sum = a+b;
      if ((even && !(sum%2)) || (!even && sum%2))
        possible = 0;
    }
    cout << (possible ? "YES" : "NO") << "\n";
  }  
  return 0;
}