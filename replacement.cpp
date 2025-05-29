#include <bits/stdc++.h>
using namespace std;

int main() {
  system("cls");
  int t; cin >> t;
  while(t--) {
    string s,r;
    int n, operations = 0;
    cin >> n >> s >> r;

    for (int i = 0, l = s.length()-1; (i < l && operations < n-1 && l); i++) {
      if (s[i] != s[i+1]) {
        s.erase(s.begin() + i);
        s[i] = r[0];
        r.erase(r.begin());
        operations++;
        l--;
        if (i-1 >= 0 && s[i-1] != s[i])
          i -= 2;
        else
          i--;
      }
    }
    cout << (operations == n-1 ? "YES" : "NO") << "\n";
  }
  return 0;
}
