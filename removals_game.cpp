#include <bits/stdc++.h>
using namespace std;

int main() {
  system("cls");
  int t; cin >> t;
  while(t--) {
    int n;
    cin >> n;
    int a[n], b[n];
    bool correspongding_same = true, crossing_same = true;
    for (int i = 0; i < n; i++)
      cin >> a[i]; 
    for (int i = 0; i < n; i++)
      cin >> b[i]; 
    for (int i = 0; (i < n && correspongding_same); i++) {
      if (a[i] != b[i])
        correspongding_same = false;
    }
    if (!correspongding_same) {
      for (int i = 0, j = n-1; (i < n && j >= 0 && crossing_same); i++,j--) {
        if (a[i] != b[j])
          crossing_same = false;
      }
    }
    cout << ((crossing_same || correspongding_same) ? "Bob" : "Alice") << "\n";
  }  
  return 0;
}