#include <bits/stdc++.h>
using namespace std;

int main() {
  system("cls");

  int n;
  bool found = false;
  string a, output;
  cin >> n >> a;

  if (n > 1) {
    for (int i = 1; i < n; i++) {
      if (a[i-1] != a[i]) {
        output += a[i-1];
        output += a[i];
        found = true;
        break;
      }
    }
  } 
  if (found)
    cout << "YES\n" << output << "\n";
  else 
    cout << "NO\n";  
  return 0;
}