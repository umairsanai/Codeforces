#include <iostream>
using namespace std;

int main() {
  system("cls");

  int t;
  cin >> t;
  while(t--) {
    int n, k, divisibles = 0, index = 0;
    bool found;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
     found = false;
      for (int j = 0; j < n; j++) {
        if (i != j && (abs(a[i]-a[j]) % k) == 0) {
          found = true;
          break;
        }
      }
      if (!found) {
        index = i;
        break;
      }
    }
    if (!found) {
      cout << "YES\n" << index + 1 << "\n";
    } else {
      cout << "NO\n";
    }

  }
  return 0;
}