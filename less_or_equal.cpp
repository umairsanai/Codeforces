#include <bits/stdc++.h>
using namespace std;

int main() {
  system("cls");
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];

  sort(a.begin(), a.end());
  if ((k < n && a[k-1] == a[k]))
    cout << -1 << "\n";
  else if (k > 0)
    cout << a[k-1] << "\n";
  else if (k == 0)
    if (a[0] > 1)
      cout << a[0] - 1 << "\n";
    else
      cout << -1 << "\n";
    
  return 0;
}