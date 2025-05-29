#include <bits/stdc++.h>
using namespace std;

typedef uint64_t num;

int main() {
  system("cls");

  cin.tie(0)->sync_with_stdio(0);

  int t, n; cin >> t;
  while (t--) {
    cin >> n;
    vector<int> a(n);
    vector<int> frequencies(n, 0);
    int operations = 0;

    for (int i = 0; i < n; i++) {
      cin >> a[i];
      frequencies[a[i]-1]++;
    }

    if (n > 1) {
        for (int k = 0; k < n/2; k++) {
          while (n > 1 && a[1] != a[n-1] && frequencies[a[0]-1] > 1) {
            frequencies[a[0]-1]--;
            a.erase(a.begin());
            n--;
            operations++;
         }
          for (int i = 1; i < n-1; i++) {
            if (a[i-1] != a[i+1] && frequencies[a[i]-1] > 1) {
              frequencies[a[i]-1]--;
              a.erase(a.begin() + i);
              i--;
              n--;
              operations++;
            }
          }
          while (n > 1 && a[n-2] != a[0] && frequencies[a[n-1]-1] > 1) {
            frequencies[a[n-1]-1]--;
            a.erase(a.end()-1);
            n--;
            operations++;
          }
        }

        while (n > 0) {
          if (n > 1 && a[0] == a[1]) {
            a.erase(a.begin(), a.begin()+2);
            n -= 2;
            frequencies[a[0]-1]--;
            frequencies[a[1]-1]--;
          } else if (n > 1 && a[0] == a[n-1]) {
            a.erase(a.begin());
            a.erase(a.end()-1);            
            n -= 2;
            frequencies[a[0]-1]--;
            frequencies[a[n-1]-1]--;
          } else {
            a.erase(a.begin());
            n--;
            frequencies[a[0]-1]--;
          }
          operations++;
        }
      } else {
        operations = 1;
      }
      cout << operations << "\n";
  }
  return 0;
}