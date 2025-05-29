#include <bits/stdc++.h>
using namespace std;

int main() {
  system("cls");
  int t; cin >> t;
  while(t--) {
    int n, moves = 0, i = 0;
    string s;
    cin >> n >> s;
    for (int k = 0; k < n; k++) {
      if (s[k] == '1') {
        moves = 1;
        break;
      }
    }
    for (; (i < n && s[i] != '1'); i++);    
    for (int j = i; j < n-1; j++) {
      if (j < n-1 && s[j] != s[j+1])
        moves++;
    }
    cout << moves << "\n";
  }
  return 0;
}