#include <bits/stdc++.h>
using namespace std;

int main() {
  system("cls");
  int t; cin >> t;
  while(t--) {
    string ans;
    int n, minIndex = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
      cin >> a[i];

    if (n%2)
      ans = "Mike";
    else {
      for (int i = 1; i < n; i++) {
        if (a[minIndex] > a[i])
          minIndex = i;
      }
      ans = ((minIndex%2) ? "Mike" : "Joe");
    }
    cout << ans << "\n";  
  }
  return 0;
}