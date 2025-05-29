#include <iostream>
using namespace std;

int main() {
  int test_cases;
  cin >> test_cases;
  string numbers[test_cases];
  for (int i = 0; i < test_cases; i++)
    cin >> numbers[i];
  for (int i = 0; i < test_cases; i++) {
    bool isImportantInteger = true;
    if (numbers[i].length() < 3 || numbers[i][0] != '1' || numbers[i][1] != '0' || numbers[i][2] == '0' || (numbers[i][2] < '2' && numbers[i].length() < 4)) {
       isImportantInteger = false;
    }
    cout << (isImportantInteger ? "YES" : "NO") << endl;
  }
  return 0;
}