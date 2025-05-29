#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n, x, ans = 0, found = 0; cin >> n >> x;
  vector<int> a(101, -1);

  for (int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    a[temp] = temp;
    if (temp == x)
      found = true;
  }
  for (int i = 0; i < x; i++) {
    if (a[i] < 0)
      ans++;
  }
  cout << (found ? ++ans : ans) << "\n";
  return 0;
}