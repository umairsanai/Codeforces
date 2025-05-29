#include <bits/stdc++.h>
using namespace std;

typedef uint64_t num;

int main() {
  system("cls");

  int t, n, r, b; cin >> t;
  while (t--) {
      cin >> n >> r >> b;
      string result;
      while (r%(b+1)) {
        for (int i = 0; i <= r/(b+1); i++) 
          result += "R";
        result += "B";
        r -= (r/(b+1)+1);
        b--;
      }
      
      for (int i = 1; i <= r/(b+1); i++)
        result += "R";
      for (int i = 1; i <= b; i++) {
          result += "B";
        for (int j = 1; j <= r/(b+1); j++)
          result += "R";
      }
      cout << result << "\n";
  }
  return 0;
}