#include <bits/stdc++.h>
using namespace std;

typedef uint64_t num;

int main() {
  system("cls");

  int t, n, x; cin >> t;
  while (t--) {
    cin >> n >> x;
    vector<int> a(n);
    int changes = 0;

    for (int i = 0; i < n; i++)
      cin >> a[i];

    for (int i = 0; i < n-1; i++) {
      int j = i+1;
      int min = a[i], max = a[i], v = (max+min)/2;

      while (i < n && j < n) {
        int temp_v;
        bool canbe_included = true;

        if (a[j] < min) {
            temp_v = (max+a[j])/2;
            for (int k = i; k <= j; k++) {
              if (abs(a[k]-temp_v) > x) {
                canbe_included = false;
                break;
              }
            }
            if (canbe_included) {
              min = a[j];
              v = temp_v;
            } else {
              changes++;
              break;
            }
        } 
        else if (a[j] > max) {
            temp_v = (a[j]+min)/2;
            for (int k = i; k <= j; k++) {
              if (abs(a[k]-temp_v) > x) {
                canbe_included = false;
                break;
              }
            }
            if (canbe_included) {
              max = a[j];
              v = temp_v;
            } else {
              changes++;
              break;
            }
        }
        j++;
      }
      i = j-1;
    }
    cout << changes << "\n";
  }

  return 0;
}