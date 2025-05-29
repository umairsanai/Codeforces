#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;
  while(t--) {
    string a; cin >> a;
    int pieces = 1, aL = a.length();
    bool O1_found = false;

    if (aL >= 2) {
      for (int i = 0; i < aL-1; i++) {
        if (a[i] == '0' && a[i+1] == '1' && !O1_found) {
          O1_found = true;
          continue;
        }
        if (a[i] != a[i+1])
          pieces++;
      }
    } 
    cout << pieces << "\n";
  }
  return 0;
}