#include <bits/stdc++.h>
using namespace std;
int main() {
  int t, n, a, b; cin >> t;
  while (t--) {
    cin >> n >> a >> b;
    cout << (!(abs(b-a) % 2) ? "YES\n" : "NO\n");
  }  
  return 0;
}