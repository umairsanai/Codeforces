#include <bits/stdc++.h>
using namespace std;

int main() {
  system("cls");

  int t; cin >> t;
  while (t--) {
    string a; cin >> a;
    int n = a.length();
    bool can_be_greater = true;

    while (true) {
      can_be_greater = false;
      int idx = -1;
      for (int i = 0; i < n; i++) {
        if (a[i] >= '5') {
          idx = i;
          can_be_greater = true;
          break;
        }
      }
      if (can_be_greater) {
        if (!idx) {
          a.insert(a.begin(), '1');
          n++;
          for (int i = 1; i < n; i++) {
            a[i] = '0';
          }
          break;
        } else {
          for (int i = idx; (a[idx] >= '4' && i >= 0); i--) {
            idx = i;
          }
          a[idx]++;
          for (int i = idx+1; i < n; i++) {
            a[i] = '0';
          }
        }
      } else {
        break;
      }
    }
    cout << a << "\n";
  }

  return 0;
}