#include <bits/stdc++.h>
using namespace std;

int main() {
  int t, n, score = 0; cin >> t;
  while(t--) {
    cin >> n;
    int vect_sizes[n] = {0}, temp;

    for (int i = 0; i < n; i++) {
      cin >> temp;
      vect_sizes[temp-1]++;
    }
    for (int i = 0; i < n; i++) {
      score += (vect_sizes[i]/2);
    }
    cout << score << "\n";
  }
  return 0;
}