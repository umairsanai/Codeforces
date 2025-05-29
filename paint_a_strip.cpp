#include <bits/stdc++.h>
using namespace std;

int main() {
  system("cls");
  int n, t; cin >> t;
  while(t--) {
    cin >> n;
    int operations = 2, ones = 4;
    if (n == 1)
      operations = 1;
    else {
      while (ones < n) {
        ones = (ones+1)*2;
        operations++;
      }
    }
    cout << operations << "\n";
  }
  return 0;
}