#include <bits/stdc++.h>
using namespace std;

int main() {
  system("cls");

  int t; cin >> t;

  while (t--) {
    string p, h;
    cin >> p >> h;
    int pL = p.length(), hL = h.length(), x = 0, extra_indeces = (hL - pL);
    bool possible = false;

    if (pL <= hL) {
      vector<string> sub_strings(extra_indeces + 1);
      for (int i = 0; i < hL; i++) {
        if (i + pL <= hL) {
          for (int j = i; j < i + pL; j++) {
            sub_strings[x] += h[j];
          }
          x++;
        }
      }
      sort(p.begin(), p.end());

      for (int i = 0; i < extra_indeces + 1; i++) {
        sort(sub_strings[i].begin(), sub_strings[i].end());
        if (p == sub_strings[i]) {
          possible = true;
          break;
        }
      }
    }

    cout << (possible ? "YES\n" : "NO\n");
  }  
  return 0;
}