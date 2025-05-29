#include <iostream>
using namespace std;

int main() {
  int test_cases;
  cin >> test_cases;

  string numbers[test_cases];
  int lengths[test_cases];
  char additional_digits[test_cases];

  for (int i = 0; i < test_cases; i++)
    cin >> lengths[i] >> additional_digits[i] >> numbers[i];

  for (int i = 0; i < test_cases; i++) {
    string num = numbers[i];
    num += '0';
    int n = num.length();
    for (int j = 0; j < n; j++) {
      if (additional_digits[i] > num[j]) {
         for (int k = n-1; k >= j; k--) {
           num[k] = num[k-1];
         }
         num[j] = additional_digits[i];
         break;
      }
    }
    cout << num << endl;
  }
  return 0;
}