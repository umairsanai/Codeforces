#include <bits/stdc++.h>
using namespace std;

int main() {

  int t, n; cin >> t;

  while (t--) {
    cin >> n;
    if (n > 4) {
      for (int i = 7; i <= n; i+=2) {
        cout << i << " ";
      }
        cout << "1 3 5 4 2 ";
      for (int i = 6; i <= n; i+=2) {
        cout << i << " ";
      }
    }     
    else {
      cout << -1 << "\n";
    }
  }

  return 0;
}