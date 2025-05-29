#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, m = 0;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
      cin >> b[i];
    }
    for (int i = 0; i < n-1; i++) {
       if ((a[i] - b[i+1]) > 0) {
          m += (a[i] - b[i+1]);
       }
    }
    m += a[n-1];
    cout << m << "\n";
  }  
  return 0;
}