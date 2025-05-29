#include <bits/stdc++.h>
using namespace std;

typedef uint64_t num;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int t, n; cin >> t;

  while (t--) {
      cin >> n;
      
      int numbers = 0, max_frequency = 0;
      vector<vector<int>> a(n, vector<int> (0,0));
      
      for (int i = 0; i < n; i++) {
          int temp;
          cin >> temp;
          a[temp-1].push_back(temp);
      }
      
      for (int i = 0; i < n; i++) {
        if (a[i].size())
          numbers++;
        if (a[i].size() > max_frequency)
          max_frequency = a[i].size();
      }

      cout << ((numbers == max_frequency) ? max_frequency - 1 : min(numbers, max_frequency)) << "\n";
  }
  return 0;
}