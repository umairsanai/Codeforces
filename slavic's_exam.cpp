#include <bits/stdc++.h>
using namespace std;

int main() {
  system("cls");
  int t; cin >> t;
  while(t--) {
    string a, b;
    cin >> a >> b;
    int qMarks = 0, x = 0, aL = a.length(), bL = b.length();
    for (int i = 0; i < aL; i++) {
      if ((a[i] != '?' && a[i] == b[x]) || (a[i] == '?')) {
        if (a[i] == '?') 
          a[i] = b[x%bL];
        x++;
      }
    }
    if (x >= bL)
      cout << "YES\n" << a << "\n";
    else  
      cout << "NO\n";
  }  
  return 0;
}