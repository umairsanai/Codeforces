#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int t, n; cin >> t;

  while (t--) {

      cin >> n;
      vector<int> x(2*n), a, b;
      for (int i = 0; i < 2*n; i++) 
          cin >> x[i];
      sort(x.begin(), x.end());
      for (int i = 0; i < 2*n; i++) {
        if (!(i%2))
          a.push_back(x[i]);
        else
          b.push_back(x[i]);
      }
      if (!(a.size()%2) && !(b.size()%2))
        cout << min(min(abs(a[a.size()/2]-b[b.size()/2-1]), abs(a[a.size()/2-1]-b[b.size()/2])), min(abs(a[a.size()/2]-a[a.size()/2-1]), abs(b[b.size()/2-1]-b[b.size()/2]))) << "\n";
      else
        cout << abs(a[a.size()/2] - b[b.size()/2]) << "\n";
  }
  return 0;
}