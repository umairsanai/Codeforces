#include <bits/stdc++.h>
using namespace std;

typedef uint64_t bnum;

int main() {
  system("cls");

  int t; cin >> t;
  while (t--) {
    int n, k, d, w, vaccines = 0;
    cin >> n >> k >> d >> w;
    vector<int> t(n);
    for (int i = 0; i < n; i++)
      cin >> t[i];

    for (int i = 0; i < n; i++) {
      int l = i+1;
      int iterations = 1;
      bool looped = false;
      while (l < n && iterations < k && t[l]-t[i] <= d+w) {
        iterations++;
        l++;
        looped = true;
      }
      vaccines++;
      if (looped)
        i = l-1;
    }
    cout << vaccines << "\n";
  }
  return 0;
}