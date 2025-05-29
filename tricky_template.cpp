#include <bits/stdc++.h>
using namespace std;

int main()
{
  cin.tie(0)->sync_with_stdio(0);
  string a, b, c;
  int t, n;
  cin >> t;
  while (t--) {
    bool isTemplate = true, is_c_different = false;
    cin >> n >> a >> b >> c;
    for (int i = 0; i < n && !is_c_different; i++) {
      if (a[i] != c[i] && b[i] != c[i])
        is_c_different = true;
    }
    for (int i = 0; i < n && isTemplate; i++) {
      if ((a[i] == c[i] || b[i] == c[i]) && !is_c_different)
        isTemplate = false;
    }
    cout << (isTemplate ? "YES" : "NO") << "\n";
  }
  return 0;
}