#include <bits/stdc++.h>
using namespace std;

typedef uint64_t num;

int main() {
  system("cls");

  int t, n; cin >> t;
  while (t--) {
    cin >> n;
    vector<int> a(n);
    num operations = 0, score = 0, difference;
    
    for (int i = 0; i < n; i++)
      cin >> a[i];
      
    if (n > 1) {
      if (a[0] > a[1]) {
        difference = a[0]-a[1];
        a[0] -= difference;
        operations += difference;      
      }
      if (a[n-1] > a[n-2]) {
        difference = a[n-1]-a[n-2];
        a[n-1] -= difference;
        operations += difference;
      }

      for (int i = 1; i < n-1; i++) {
        if (a[i-1] < a[i] && a[i] > a[i+1]) {
          difference = min(abs(a[i]-a[i-1]), abs(a[i]-a[i+1]));
          a[i] -= difference;
          operations += difference;
        }
      }
      score += a[0] + a[n-1] + operations;
      for (int i = 1; i < n; i++)
        score += abs(a[i]-a[i-1]);
    } else {
      score = a[0];
    }
    cout << score << "\n";    
  }
  return 0;
}