#include <bits/stdc++.h>
using namespace std;

typedef uint64_t num;

int main() {
  system("cls");

  int t, n, k; cin >> t;
  while (t--) {
      string s;
      vector<int> indexes;
      int operations = 2, last_x_index = 0;

      cin >> n >> k >> s;

      for (int i = 0; i < n; i++) {
        if (s[i] == '*')
          indexes.push_back(i);
      }
      if (indexes.size() < 3) {
        cout << indexes.size() << "\n";
        continue;
      }
      for (int i = 1; i < indexes.size(); i++) {
          if (i+1 < indexes.size() && indexes[i] - indexes[last_x_index] == k) {
              operations++;
              last_x_index = i;
          } else if (indexes[i]-indexes[last_x_index] > k) {
              operations++;
              last_x_index = (i >= 1 ? i-1 : 0);
              i--;
          }
      }
      cout << operations << "\n";
  }
  return 0;
}