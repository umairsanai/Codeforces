#include <bits/stdc++.h>
using namespace std;

int main() {
  int test_cases; 
  cin >> test_cases;
  
  string crnt_str;
  int n;

  while (test_cases--) {
    bool digitAfterLetter = false, digitDecreasingOrder = false, letterDecreasingOrder = false;
    cin >> n >> crnt_str;
    for (int i = 0; i < n && !digitAfterLetter && !digitDecreasingOrder && !letterDecreasingOrder; i++) {
        for (int j = i+1; j < n; j++) {
            if (crnt_str[i] >= 'a' && crnt_str[j] <= '9') {
              digitAfterLetter = true;
              cout << "NO\n";
              break;
            }
            if (crnt_str[i] <= '9' && crnt_str[j] <= '9' && crnt_str[i] > crnt_str[j]) {
              digitDecreasingOrder = true;
              cout << "NO\n";
              break;
            }
            if (crnt_str[i] >= 'a' && crnt_str[j] >= 'a' && crnt_str[i] > crnt_str[j]) {
              letterDecreasingOrder = true;
              cout << "NO\n";
              break;
            }
        }
    }
    if (!digitAfterLetter && !digitDecreasingOrder && !letterDecreasingOrder) {
      cout << "YES\n";
    }
  }
  return 0;
}