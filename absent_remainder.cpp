#include <bits/stdc++.h>
using namespace std;

int main() {

  int t, n; cin >> t;
  while (t--) {
    cin >> n;
    vector<int> a(n);
    vector<bool> nums(1000000, false);
    int pairs_found = 0;

    for (int i = 0; i < n; i++) {
      cin >> a[i];
      nums[a[i]-1] = true;
    }

    sort(a.rbegin(), a.rend());
    if (nums[0]) {
      for (int i = 0; i < n/2; i++)
        cout << a[i] << " 1\n";
    } else {
      for (int i = n-2; (i >= 0 && pairs_found < n/2); i--) {
          for (int j = n-1; (j > i && pairs_found < n/2); j--) {
              int modulo = a[i]%a[j];
              if (!modulo || (modulo && !nums[(modulo)-1])) {
                cout << a[i] << " " << a[j] << "\n";
                pairs_found++;
              }
          }
      }
    }
  }
  return 0;
}