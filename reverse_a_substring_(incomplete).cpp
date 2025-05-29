#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, x = 0, y = 0;
  bool found = false;
  string a, b;

  cin >> n >> a;

  // Don't know why this is failing the test case!

  b = a;
  char max_char = 0, min_char = 'z';
  int min_i, max_i;

  for (int i = 0; i < n-1; i++) {
      if (min_char >= a[i]) {
        min_char = a[i];
        min_i = i;
      }
  }
  for (int i = 0; i < min_i; i++) {
    if (max_char < a[i]) {
        max_char = a[i];
        max_i = i;
    }
  }
  reverse(b.begin() + max_i, b.begin() + min_i + 1);
  if (b < a && min_char != max_char)
    cout << "YES\n" << max_i + 1 << " " << min_i + 1 << "\n";
  else
    cout << "NO\n";
  return 0;
}