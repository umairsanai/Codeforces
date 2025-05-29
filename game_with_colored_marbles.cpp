#include <bits/stdc++.h>
using namespace std;

int main() {

  int t; cin >> t;

  while (t--) {
    int n, score = 0;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    
    vector<int> non_repeating, repeating;
    sort(a, a + n);


    if (n >= 2) {
      if (a[0] == a[1]) {
        repeating.push_back(a[0]);
      } else {
        non_repeating.push_back(a[0]);
      }

      for (int i = 1; i < n-1; i++) {
        if (a[i-1] == a[i]) {
          repeating.push_back(a[i]);
        }
        if (a[i-1] != a[i] && a[i] != a[i+1]) {
          non_repeating.push_back(a[i]);
        }
      }

      if (a[n-2] == a[n-1]) {
        repeating.push_back(a[n-1]);
      } else {
        non_repeating.push_back(a[n-1]);
      }

      int i = 0;
      while (i < repeating.size()-1 && repeating.size()) {
        if (repeating[i] == repeating[i+1]) {
          while (repeating[i] == repeating[i+1] && (i + 1 < repeating.size()) && repeating.size()) {
            repeating.erase(repeating.begin() + i);
          }
        } else {
          i++;
        }
      }
      
      if (non_repeating.size() % 2) {
        score += (non_repeating.size()/2 + 1)*2;
      } else {
        score += (non_repeating.size()/2)*2;
      }
      score += repeating.size();

    } else {
      score = 2;
    }
    cout << score << "\n";
  }
  return 0;
}