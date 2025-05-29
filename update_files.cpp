#include <bits/stdc++.h>
using namespace std;

typedef int64_t num;
typedef long double ld;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int t; cin >> t;  
  while (t--) {
    num n, k, hrs = 0, updated_cmp = 1;
    cin >> n >> k;
    while (updated_cmp < k) {
        updated_cmp *= 2;
        hrs++;
    }
    hrs += ceil(ld(n-updated_cmp)/k);
    cout << hrs << "\n";
  }
  return 0;
}