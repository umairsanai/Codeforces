#include <bits/stdc++.h>
using namespace std;

int main()
{
  system("cls");
  int t; cin >> t;
  while (t--) {
    int n, k, x;
    long long sum = -200000000000, bob_sum = 0;
    cin >> n >> k >> x;
    vector<int> a(n);
    vector<int> sums(n, 0);

    for (int i = 0; i < n; i++)
      cin >> a[i];

    sort(a.begin(), a.end());

    sums[n-1] = a[0];
    for (int i = 1; i < n; i++)
      sums[n-i-1] = (a[i] + sums[n-i]);
      
    reverse(a.begin(), a.end());

    for (int i = 0; i < x; i++)
      bob_sum += a[i];

    for (int i = 0; i <= k; i++) {
      int sum_i = 0, z = (i + x);
      if (i > 0) {
        bob_sum -= a[i-1];
        bob_sum += ((x+i-1) < n ? a[x+i-1]: 0);
      }
      sum_i -= bob_sum;
      sum_i += (z < n ? sums[z] : 0);
      if (sum_i > sum)
        sum = sum_i;
    }
    cout << sum << "\n";
  }
  return 0;
}