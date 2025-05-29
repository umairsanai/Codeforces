#include <bits/stdc++.h>
using namespace std;

int main() {
  system("cls");

  int t; cin >> t;
  while(t--) {
    int n;
    cin >> n;
    if (n%3 == 1) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
  return 0;
}