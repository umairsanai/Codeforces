#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n; cin >> n;
  vector<int> a(n);
  vector<int> left, right;

  for (int i = 0; i < n; i++)
      cin >> a[i];
  
  sort(a.begin(), a.end());
  int max = a[n-1];
  for (int i = 0; i < n; i++) {
      if (a[i] == max) {
        a.erase(a.begin()+i, a.end()-1);
        break;
      }
  }
  n = a.size();

  for (int i = n-1; i >= 0; i--) {
      if (i%2) {
        if (left.size()) {
          if (a[i] != left[left.size()-1]) {
            left.push_back(a[i]);
          }
        } else {
          if (a[i] != max)
            left.push_back(a[i]);
        }
      } else {
        if (right.size()) {
          if (a[i] != right[right.size()-1]) {
            right.push_back(a[i]);
          }
        } else {
          if (a[i] != max)
            right.push_back(a[i]);
        }
      }
  }
  cout << left.size() + right.size() + 1 << "\n";
  for (int i = left.size()-1; i >= 0; i--)
    cout << left[i] << " ";
  cout << max << " ";
  for (int i = 0; i < right.size(); i++)
    cout << right[i] << " ";
  cout << "\n";
  return 0;
}