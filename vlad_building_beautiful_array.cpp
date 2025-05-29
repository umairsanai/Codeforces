#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;
  while(t--) {
    int n; cin >> n;
    int a[n], min_even = 1000000000, min_odd = 1000000000;
    bool even_present = false, odd_present = false;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      if (a[i]%2) {
        odd_present = true;
        if (min_odd > a[i])  min_odd = a[i];
      } else {
        even_present = true;
        if (min_even > a[i]) min_even = a[i];
      } 
    }
    cout << ((even_present && odd_present) ? ((min_even < min_odd) ? "NO\n" : "YES\n") : ("YES\n"));
  }
  return 0;
}