#include <bits/stdc++.h>
using namespace std;

int main() {
  system("cls");
  int n, m, x, maxIndex = 0;
  cin >> n >> m;
  int a[n];
  for (int i = 0; i < n; i++) {
    int min = 1000000001;
    for (int j = 0; j < m; j++) {
      cin >> x;
      if (min > x)
        min = x;
    }
    a[i] = min;
  }
  for (int i = 1; i < n; i++) {
    if (a[maxIndex] < a[i])
      maxIndex = i;
  }
  cout << a[maxIndex] << "\n";
  return 0;
}