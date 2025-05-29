#include <bits/stdc++.h>
using namespace std;

int main() {
  system("cls");

  int t; cin >> t;
  while(t--) {
    uint64_t n; cin >> n;
    double root = sqrt(n*(n+1)/2.0);

    if (root == int(root)) {
      cout << "-1";
    } else {
      cout << "2 1 ";
      for (uint64_t i = 3; i <= n; i++) {
        root = sqrt((i)*(i+1)/2.0);
        if (root == long(root) && i < n) {
          cout << i+1 << " " << i << " ";
          i++;
        } else {
          cout << i << " ";
        }
      }
    }
    cout << "\n";
  }

  return 0;
}