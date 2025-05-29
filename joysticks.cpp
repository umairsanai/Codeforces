#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, mins = 0; cin >> a >> b;

  while (a && b) {
      if (a > b) {
          if (a >= 2) {
              a -= 2;
              b++; 
              mins++;           
          } else {
            break;
          }
      } else {
        if (b >= 2) {
          b -= 2;
          a++;
          mins++;
        } else {
          break;
        }
      }
  }  
  cout << mins << "\n";
  return 0;
}