#include <bits/stdc++.h>
using namespace std;
typedef long double ld;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  uint64_t n, m, a;
  cin >> n >> m >> a;
  cout << uint64_t(ceil(m/ld(a))*ceil(n/ld(a))) << "\n";

  return 0;
}