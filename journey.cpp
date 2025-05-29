#include <iostream>
using namespace std;

int main() {

  int t; cin >> t;
  while (t--) {
    int n, a, b, c, sum, cycles = 0, total_days = 0;
    cin >> n >> a >> b >> c;
    sum = a + b + c;
    cycles = n/sum;
    if (n%sum != 0) {
      if (n%sum <= a) {
        total_days = 1;
      } else if (n%sum <= a+b) {
        total_days = 2;
      } else if (n%sum <= a+b+c) {
        total_days = 3;
      }
    }
    total_days += cycles*3;
    cout << total_days << "\n";
  }
  return 0;
}