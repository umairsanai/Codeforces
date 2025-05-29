#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int t; cin >> t;
  while (t--) {
      int n; cin >> n;
      long long ratings[n], sum = 0;
      for (int i = 0; i < n; i++)
          cin >> ratings[i];
      for (int i = 0; i < n-2; i++)
        sum += ratings[i];
      ratings[n-1] -= ratings[n-2] - sum;
      cout << ratings[n-1] << "\n";
  }
  return 0;
}