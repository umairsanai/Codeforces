#include <iostream>
using namespace std;

int main() {
  system("cls");
  int t; cin >> t;
  while(t--) {
    int n;
    bool flag = false;
    string a;
    cin >> n >> a;
    for (int i = 0; (i < n/2 && !flag); i++) {
      if (abs(a[n-i-1] - a[i]) != 0 && abs(a[n-i-1] - a[i]) != 2)
          flag = true;
    }
    cout << (!flag ? "YES\n" : "NO\n"); 
  }
  return 0;
}