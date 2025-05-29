#include <bits/stdc++.h>
using namespace std;

typedef uint64_t num;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  system("cls");

  int t, n; cin >> t;

  while (t--) {
      cin >> n;
      cout << 2 << "\n";
      if (n >= 4) 
      {
        cout << n << " " << n-2 << "\n" 
             << n-1 << " " << n-1 << "\n";
        
        for (int i = 1; i < n-2; i++)
            cout << n-i << " " << n-i-2 << "\n";
      } 
      else 
      {
        cout << ((n == 3) ? "1 3\n2 2\n" : "1 2\n");
      }
  }
  return 0;
}