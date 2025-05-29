#include <bits/stdc++.h>
using namespace std;

int main() {
  system("cls");
  int t, n; cin >> t;
  while(t--) {
    cin >> n;
    int a[n], possible = 1;
    for (int i = 0; i < n; i++)
      cin >> a[i];

    for (int i = 0; i < n-1; i++) {
      if (a[i] - a[i+1] == 1) {
        int temp = a[i+1];
        a[i+1] = a[i];
        a[i] = temp;
        if (i > 0 && a[i] - a[i-1] == 1)
          i-=2;
      }
    }

    for (int i = 0; i < n-1; i++) {
      if (a[i] > a[i+1]) {
        possible = 0;
        break;
      }
    }
    cout << (possible ? "YES" : "NO") << "\n";
  }  
  return 0;
}