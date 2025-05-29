#include <iostream>
using namespace std;

int main() {
  int t, n; cin >> t;
  while(t--) {
    string a, combinations[8] = {
            "FBFFBFFBFB", "BFFBFFBFBF", "FFBFFBFBFF", "FBFFBFBFFB",
            "BFFBFBFFBF", "FFBFBFFBFF", "FBFBFFBFFB", "BFBFFBFFBF"};
    cin >> n >> a;
    bool matched = false;
    for (int i = 0; i < 8 && !matched; i++) {
      matched = false;
      int l = 0;
      if (combinations[i][l] == a[l]) {
        matched = true;
        while (l < n && matched) {
          if (combinations[i][l] == a[l]) 
            l++;
          else 
            matched = false;
        }
      }
    }
    cout << (matched ? "YES\n" : "NO\n");
  }  
  return 0;
}