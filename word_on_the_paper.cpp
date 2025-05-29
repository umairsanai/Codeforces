#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int t; cin >> t;
  while (t--) {
    string a[8], word;
    int column = 0;
    bool wordFound = false;

    for (int i = 0; i < 8; i++)
      cin >> a[i];

    for (int i = 0; i < 8; i++) {
      for (int j = column; j < 8; j++) {
          if (a[i][j] != '.') {
            word += a[i][j];
            column = j;
            break;
          }
      }
    }
    cout << word << "\n";
  }
  return 0;
}