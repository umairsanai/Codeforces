#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int t; cin >> t;
  while (t--) {

      string a, b, output;
      getline(cin >> ws, a);
      if (a[0] != ' ')
        b += a[0];
      for (int i = 1, n = a.length(); i < n; i++) {
          if (a[i-1] == ' ' && a[i] == ' ' ){
            continue;
          }
          b += a[i];
      }
      for (int i = 0, n = b.length(); i < n; i++) {
        string temp;
          if (b[i] == ' ') {
            output += ' ';
            continue;
          }
         while (b[i] != ' '){
            if (b[i] == '\0')
              break;
            temp += b[i];
            i++;
          }
          i--;
          for (int j = 0, x = temp.length(); j < x; j++) {
              output += temp[x-j-1];
          }
      }
      cout << output << "\n";
  }
  return 0;
}