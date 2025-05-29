#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int t; cin >> t;
  while (t--) {
    int n, k, a_count = 0, b_count = 0, operations = 0, i = 0;
    char c;
    string a;
    cin >> n >> k >> a;
    
    for (int i = 0; i < n; i++)
      a[i] == 'A' ? a_count++ : b_count++;
    
    if (b_count == k) {
       cout << 0 << "\n";
       continue;
    } else if (b_count > k) {
      c = 'A';
      operations++;
    } else {
      c = 'B';
      operations++;
    }

    for (; b_count > k; i++) {
      if (a[i] == 'B')
        b_count--;
    }
    for (; b_count < k; i++) {
      if (a[i] == 'A')
        b_count++;
    }

    cout << operations << "\n" << i << " " << c << "\n";
  }
  return 0;
}