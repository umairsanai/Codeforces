#include <bits/stdc++.h>
using namespace std;

int main() {
  system("cls");

  int t; cin >> t;
  while (t--) {
    int n, min_nums;
    cin >> n;
    
    vector<int> a(n), nums_tobe_rmvd(n);
    
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      nums_tobe_rmvd[i] = i;
    }

    min_nums = n;

    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        if (a[j] > a[i])
          nums_tobe_rmvd[i]++;
      }
      if (nums_tobe_rmvd[i] < min_nums)
        min_nums = nums_tobe_rmvd[i];
    }
    cout << min_nums << "\n";
  }
  return 0;
}