#include <bits/stdc++.h>
using namespace std;

typedef uint64_t num;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int t, n; cin >> t;
  while (t--) {
    cin >> n;
    vector<int> a(n);
    vector<vector<int>> frequencies(n, vector<int> (2,0));

    bool any_copy = false, indexes_changed = false;
    int start = 0, end = 0, shortest_length = n;
    
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      if (frequencies[a[i]-1][0])
        any_copy = true;
      frequencies[a[i]-1][0]++;
      frequencies[a[i]-1][1] = i;
    }

    if (n > 1 && any_copy) {
      for (int i = 0; i < n; i++) {
        if (frequencies[a[i]-1][0] == 1) {
          int new_length = n;
          int temp_start = i, temp_end = 0;
          for (int j = frequencies[a[i]-1][1]; (j < n && frequencies[a[j]-1][0] == 1); j++) {
            temp_end = j;
            i++;
            new_length--;
          }
          if ((temp_end-temp_start) >= (end-start) && new_length < shortest_length) {
            start = temp_start;
            end = temp_end;
            indexes_changed = true;
            shortest_length = new_length;
            i--;
          }
        }
      }
      if (indexes_changed) {
        cout << start + 1 << " " << end + 1 << "\n";
      } else {
        cout << start << "\n";
      }
    } else if (!any_copy) {
      cout << 1 << " " << n << "\n";
    }
    else {
      cout << 1 << " " << 1 << "\n";
    } 

  }

  return 0;
}