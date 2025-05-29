#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
      long long n;
      cin >> n;
      int coins = 1;
      while (n > 3) {
        coins *= 2;
        n /= 4;
      }
      cout << coins << "\n";
  }
  
  return 0;
}