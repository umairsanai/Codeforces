#include <bits/stdc++.h>
using namespace std;

typedef uint64_t num;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n, c, max = 0; cin >> n >> c;
  vector<int> a(n);
  for (int i = 0; i < n; i++) 
      cin >> a[i];
  
  for (int i = 0; i < n-1; i++) {
      if (a[i] > a[i+1]) {
          if (a[i]-a[i+1]-c > max) {
            max = a[i]-a[i+1]-c;
          }
      }
  }
  cout << max << "\n";
  return 0;
}