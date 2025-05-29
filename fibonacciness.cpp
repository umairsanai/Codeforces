#include <bits/stdc++.h>
using namespace std;

int main() {
  system("cls");
  int t; cin >> t;

  while (t--) {
    int a[5] = {0}, x[201] = {0}, maxx = 0;
    cin >> a[0] >> a[1] >> a[3] >> a[4];

    for (int i = 0; i <= 200; i++) {
      a[2] = i-100;
      if (a[0] + a[1] == a[2]) 
        x[i]++;
      if (a[1] + a[2] == a[3])
        x[i]++;
      if (a[2] + a[3] == a[4])
        x[i]++;
    }

    for (int i = 0; i <= 200; i++) {
      if (maxx < x[i])
        maxx = x[i];
    }
    cout << maxx << "\n";
  }

  return 0;
}