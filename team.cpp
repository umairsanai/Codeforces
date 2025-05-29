#include <iostream>
using namespace std;

int main() {
  int n, solutions = 0, x,y,z;
  cin >> n;
  for (int i = 0; i < n; i++) {
      cin >> x >> y >> z;
      if (((x == y || x == z) && x == 1) || (y == z && y == 1))
          solutions++;
  }
  cout << solutions << endl;
  return 0;
}