#include <bits/stdc++.h>
using namespace std;

int main() {
  system("cls");

  int t; cin >> t;
  while (t--) {
      int n;
      cin >> n;
      vector<int> a(n);
      for (int i = 0; i < n; i++)
        cin >> a[i];
        
      bool possible = true;

      for (int k = 0; k < n; k++) {

          if (n > 1) {
            if (a[0] > a[1]) {
    
              if (a[0] < 10 && a[1] < 10) {
                possible = false;
              } else if (a[0] >= 10) {
    
                if (a[0]/10 > a[0]%10) {
                  possible = false;
                } else {
                  int num = a[0];
                  a[0] = a[0]/10;
                  a.insert(a.begin() + 1, num%10);
                  n++;
                }
              } 
            }
            if (a[n-2] > a[n-1]) {
    
              if (a[n-2] < 10 && a[n-1] < 10) {
                possible = false;
              } else if (a[n-2] >= 10) {
    
                if (a[n-2]/10 > a[n-2]%10) {
                  possible = false;
                } else {
                  int num = a[n-2];
                  a[n-2] = a[n-2]/10;
                  a.insert(a.begin()+n-1, num%10);
                  n++;
                }
    
              }
            }
          }      
          for (int i = 1; (i < n-1 && possible); i++) {
            if (a[i] >= 10) {
              if (a[i-1] > a[i] || a[i] > a[i+1]) {
                if (a[i]/10 > a[i]%10) {
                  possible = false;
                  break;
                }
                int num = a[i];
                a[i] = a[i]/10;
                a.insert(a.begin()+i+1, num % 10);
                n++;
              }
            }
          }
      }
      for (int i = 0; (i < n-1 && possible); i++) {
        if (a[i] > a[i+1])
          possible = false;
      }
      cout << (possible ? "YES" : "NO") << "\n";
  }
  return 0;
}