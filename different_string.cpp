#include <bits/stdc++.h>
using namespace std;

int main() {
  int test_cases;
  cin >> test_cases;
  while (test_cases--) {
     string original, input;
     bool mismatched = false;

     cin >> original;
     input = original;     

    for (int i = 0, m = input.length(); i < m && !mismatched; i++) {
        for (int j = i+1; j < m; j++) {
            char temp = input[i];
            input[i] = input[j];
            input[j] = temp;
            if (original != input) {
              mismatched = true;
              break;
            }
        }
    }
    mismatched ? cout << "YES\n" << input << "\n" : cout << "NO\n";
  }
  return 0;
}