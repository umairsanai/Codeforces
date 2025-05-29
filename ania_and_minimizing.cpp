#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  string s;
  int n, k; 
  cin >> n >> k >> s;

  if (n == 1 && k) {
    s[0] = '0';
  } else {
    for (int i = 0; (i < s.size() && k); i++) {
        if (i == 0) {
          if (s[i] > '1') {
            s[i] = '1';
            k--;
          }
        } else {
          if (s[i] != '0') {
            s[i] = '0';
            k--;
          }
        }
    } 
  }
  cout << s << "\n";
  return 0;
}