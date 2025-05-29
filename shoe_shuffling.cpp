#include <bits/stdc++.h>
using namespace std;

typedef uint64_t num;

int main() {
  system("cls");

  int t, n; cin >> t;
  while (t--) {
    cin >> n;
    vector<int> a(n);
    vector<int> sequence(n, 0);
    bool possible = true;

    for (int i = 0; i < n; i++) {
      cin >> a[i];
      sequence[i] = i+1;
    }

    for (int i = 0; (i < n-1 && possible); i++) {
      int l = i, m = i+1;
      while (m < n && a[l] == a[m]) {
        sequence[l++] ^= sequence[m++] ^= sequence[l] ^= sequence[m];
      }
      i = l;
      if((i > 0 && a[i-1] != a[i] && a[i] != a[i+1]) || (i == 0 && a[i] != a[i+1]))
        possible = false;
    }
    for (int i = 0; (i < n && possible); i++) {
      if (sequence[i] == i+1) {
        possible = false;
      }
    }

    if (possible) {
      for (int i : sequence)
        cout << i << " ";
    } else {
      cout << -1;
    }
    cout << "\n";

  }

  return 0;
}