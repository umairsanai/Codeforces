#include <bits/stdc++.h>
using namespace std;

int main() {
  system("cls");
  int t; cin >> t;

  while(t--) {
    int n, ans, even_at_even = 0, odd_at_odd = 0, size = 0;
    string x; 
    cin >> n >> x;

    vector<int> a(n);
    for (int i = n-1; i >= 0; i--)
      a[i] = (x[i]-'0');

    for (int i = 0; i < n; i++) {
      if (!(i%2) && a[i]%2)
        odd_at_odd = 1;
      else if (i%2 && !(a[i]%2))
        even_at_even = 1;
    }
    ans = ((n==1) ? ((a[n-1]%2) ? 1 : 2) : ((n%2) ? (odd_at_odd ? 1 : 2) : (even_at_even ? 2 : 1)));
    cout << ans << "\n";
  } 
  return 0;
}