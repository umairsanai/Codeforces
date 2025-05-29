#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int t; cin >> t;
  while (t--) {
    int n;
    string a;
    cin >> n >> a;
    if (a[n-1] == 'A' || a[n-1] == 'B')
      cout << a[n-1] << "\n";
    else
      cout << "?\n";
  }
  return 0;
}