#include <iostream>
using namespace std;

int main() {
  system("cls");

  string a, b;
  cin >> a >> b;

  int aL = a.length(), bL = b.length(), common_from_last = 0, moves = 0;

  for (int i = 0; ((i < min(aL, bL)) && (a[aL-i-1] == b[bL-i-1])); i++) {
    if (a[aL-i-1] == b[bL-i-1])
      common_from_last++;
  }
  moves = aL + bL - 2*common_from_last;
  cout << moves << "\n";

  
  return 0;
}