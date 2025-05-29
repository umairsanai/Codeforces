#include <bits/stdc++.h>
using namespace std;

int main() {
  system("cls");
  int t; cin >> t;
  while(t--) {
    int n, k, size = 0, index = 0, ans;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> sizes;
    vector<vector<int>> nums(0,vector<int> (0));
    for (int i = 0; i < n; i++)
     cin >> a[i];
    
    sort(a.begin(), a.end());    
    while(index < n-1) {
      if (index < n-1 && a[index] == a[index+1]) {
        nums.resize(++size);
        nums[size-1].push_back(a[index]);
        for (int j = index; (j < n-1 && a[j] == a[j+1]); j++,index++)
          nums[size-1].push_back(a[j+1]);
      } else {
        nums.resize(++size);
        nums[size-1].push_back(a[index]);
      }
      index++;
    }
    if (n >= 2 && a[n-2] != a[n-1]) {
      nums.resize(++size);
      nums[size-1].push_back(a[n-1]);
    }
    for (int i = 0; i < size; i++)
      sizes.push_back(nums[i].size());

    ans = ((n == 1 || (k+1 >= n)) ? 1 : sizes.size());
    if (ans != 1) {
      sort(sizes.begin(), sizes.end());
      for (int i = 0, l = sizes.size(); i < l; i++) {
        if (k >= sizes[i]) {
          k -= sizes[i];
          ans--;
        } else  
          break;
      }
    }
    cout << ans << "\n";
  }
  return 0;
}