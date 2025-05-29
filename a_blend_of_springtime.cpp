#include <iostream>
using namespace std;

int main() {
  system("cls");

  string a;
  cin >> a;
  int n = a.length();
  bool possible = false;

  if (n >= 3) {
    for (int i = 1; (i < n-1 && !possible); i++) {
      if (a[i-1] != a[i] && a[i] != a[i+1] && a[i-1] != a[i+1] && a[i] != '.' && a[i-1] != '.' && a[i+1] != '.') {
          possible = true;      
      }
    }
  }
  cout << (possible ? "YES\n" : "NO\n");

  return 0;
}