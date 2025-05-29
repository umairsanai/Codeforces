#include <bits/stdc++.h>
using namespace std;
// 1 2 2

int main() {
  system("cls");

  int t; cin >> t;
  while(t--) {
    int n, max = 0, possible = 0, size;
    cin >> n;
    size = n;
    vector<int> a(n);
    vector<int> frequency(n,0);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      frequency[a[i]-1]++;
      if (max < a[i])
        max = a[i];
    }
    for (int i = 0; i < size; i++) {
      if (!frequency[i]) {
        frequency.erase(frequency.begin() + i--);
        size--;
      }
    }
    if (frequency[size-1]%2 == 0) {
      for (int i = 0; (i < size-1 && !possible); i++) {
        if (frequency[i]%2)
          possible = 1;
      }
    } else
      possible = 1;
    cout << (possible ? "YES" : "NO") << "\n";
  }
  return 0;
}