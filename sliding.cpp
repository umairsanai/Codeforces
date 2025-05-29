#include <iostream>
using namespace std;

int main() {
  int test_cases, n, m, r, c;
  cin >> test_cases;
  long long distances[test_cases];
  for (int y = 0; y < test_cases; y++) {
      long long distance = 0;
      cin >> n >> m >> r >> c;
      for (int i = 0; i < 2*m - 1; i++)
          distance += (n - r);
      distance += (m - c);
      distances[y] = distance;
  }
  for (int i = 0; i < test_cases; i++)
     cout << distances[i] << endl;
  return 0;
}