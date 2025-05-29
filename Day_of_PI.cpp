#include <iostream>
using namespace std;

int main() {
  int test_cases;
  cin >> test_cases;
  string inputs[test_cases], PI = "314159265358979323846264338327";

  for (int i = 0; i < test_cases; i++) {
    cin >> inputs[i];
  }
  for (int i = 0; i < test_cases; i++) {
    int correct_count = 0;
    for (int j = 0, n = inputs[i].length(); j < n; j++) {
      if (inputs[i][j] == PI[j]) {
        correct_count++;
      } else {
        break;
      }
    }
    cout << correct_count << endl;
  }
  return 0;
}