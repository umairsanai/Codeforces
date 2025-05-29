#include <iostream>
using namespace std;

int main() {
  int test_cases; 
  cin >> test_cases;
  int moves[test_cases];
  
  for (int x = 0; x < test_cases; x++) {
      int m, length;
      cin >> m >> length;
      string inputs[m];
      for (int i = 0; i < m; i++) {
          cin >> inputs[i];
      }
      int min_difference = 26*length, difference = 0;
      for (int i = 0; i < m; i++) {
        for (int j = i + 1; j < m; j++) {
          for (int k = 0; k < length; k++)
            difference += abs(inputs[i][k] - inputs[j][k]); 
        if (min_difference > difference)
          min_difference = difference;
        difference = 0;
        }
      }
      moves[x] = min_difference;
  }
  for (int i = 0; i < test_cases; i++) {
    cout << moves[i] << "\n";
  }
  return 0;
}