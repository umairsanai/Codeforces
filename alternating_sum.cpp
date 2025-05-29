#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int t, n; cin >> t;
  while (t--) {
    int sum = 0;
    cin >> n;
    int nums[n];
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    for (int i = 0; i < n; i++)
      !(i%2) ? sum += nums[i] : sum -= nums[i];
    cout << sum << endl;
  }
  return 0;
}