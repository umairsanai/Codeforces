#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int64_t n, current = 0, moves = 0; cin >> n;
  vector<int64_t> a(n);

  for (int i = 0; i < n; i++)
    cin >> a[i];

  for (int i = 0; i < n; i++) {
    if (a[i] != current) {
      moves += abs(a[i]-current);
      current = a[i];
    }
  }
  cout << moves << "\n";
  return 0;
}