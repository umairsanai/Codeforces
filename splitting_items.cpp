#include <bits/stdc++.h>
using namespace std;

int main() {
  system("cls");
  int t; cin >> t;
  while(t--) {
    int n, k, A = 0, B = 0;
    cin >> n >> k;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
      cin >> a[i];
    
    sort(a.rbegin(), a.rend());
    for (int i = 1; (i < n && k); i+=2) {
      if (i%2) {
        int x = a[i-1] - a[i];
        if (k > x) {
          a[i] += x;
          k -= x;
        } else {
          a[i] += k;
          k = 0;
        }
      }
    }
    for (int i = 0; i < n; i++) {
      if (i%2)
        B += a[i];
      else 
        A += a[i];            
    }    
    cout << A - B << "\n"; 
  }
  return 0;
}