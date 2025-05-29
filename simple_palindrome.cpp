#include <iostream>
using namespace std;

int main() {
  int test_cases;
  cin >> test_cases;

  int lengths[test_cases];
  string outputs[test_cases], vowels = "aeiou";

  for (int x = 0; x < test_cases; x++) {
      cin >> lengths[x];
      for (int i = 0; lengths[x] > 0; i++, lengths[x]--)
          outputs[x] += vowels[i%5];
      for (int i = 0, n = outputs[x].length(); i < n; i++) {
        for (int j = i; j < n; j++) {
            if (outputs[x][i] > outputs[x][j]) {
                char temp = outputs[x][i];
                outputs[x][i] = outputs[x][j];
                outputs[x][j] = temp;
            }
        }           
      }
  }
  for (int i = 0; i < test_cases; i++)
      cout << outputs[i] << endl;
  return 0;
}