#include <bits/stdc++.h>
using namespace std;

typedef uint64_t bnum;

int main() {
  system("cls");
  int t, n; cin >> t;
  while (t--) {
    int males = 0, females = 0, cages = 0, max_cages = 0;
    cin >> n;
    vector<int> a(n);
    
    for (int i = 0; i < n; i++)
      cin >> a[i];

    for (int i = 0; i < n; i++) {
      if (a[i] == 1) {
          cages++;
          if (ceil((males+1)/2.0) + ceil(females/2.0) > ceil(males/2.0) + ceil((females+1)/2.0))
            males++;
          else
            females++;
      } else
        cages = ceil(males/2.0) + ceil(females/2.0);
    
      if (max_cages < cages)
        max_cages = cages;
    }
    cout << max_cages << "\n";
  }
  return 0;
}