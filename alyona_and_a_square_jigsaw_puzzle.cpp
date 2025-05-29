#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
    int n, sum = 0, happy_days = 0, bricks_sum = 1;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
      sum += a[i];
      if (sum > bricks_sum) {
        while (sum > bricks_sum) {
          bricks_sum = (sqrt(bricks_sum) + 2)*(sqrt(bricks_sum) + 2);
        }
        if (sum == bricks_sum) {
          happy_days++;
        }
      } else if (sum == bricks_sum) {
        happy_days++;
        bricks_sum = (sqrt(bricks_sum) + 2)*(sqrt(bricks_sum) + 2);
      }

    }
    cout << happy_days << "\n";
  }  
  return 0;
}