#include <bits/stdc++.h>
using namespace std;

int main() {
  system("cls");
  int t; cin >> t;
  while(t--) {
    int n;
    string a;
    cin >> n >> a;

    for (int i = 1; i < n-1; i++, n--) {
      if ((a[i] != a[i+1]) || (a[i] == a[i+1] && a[i] == '0'))
        a[i+1] = '0';
      else
        a[i+1] = '1';        
      a.erase(a.begin()+i);
    }
    for (int i = 0; i < n-1; n--) {
      if (a[i] == a[i+1] && a[i] == '0')
      a[i+1] = '0';
      else
      a[i+1] = '1';
      a.erase(a.begin());
    }
    cout << (a[0] == '1' ? "YES" : "NO") << "\n";
  } 
  return 0;
}