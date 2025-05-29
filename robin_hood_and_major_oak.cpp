#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  cin.tie(0)->sync_with_stdio(0);
  int t;
  cin >> t;
  while (t--)
  {
    int n, k;
    ll leaves = 0;
    cin >> n >> k;
    leaves = (n * (n + 1) - (n - k) * (n - k + 1)) / 2;
    cout << (leaves % 2 ? "NO" : "YES") << "\n";
  }
  return 0;
}