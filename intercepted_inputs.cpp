#include <bits/stdc++.h>
using namespace std;

int main() {

  // Solution gives correct answers. Exceeds time limit i.e. 2 sec
 
  int t; cin >> t;
 
  while (t--) {
    int k; cin >> k;
    int inputs[k];
    bool found = false;
    vector<int> divisors;

    for (int i = 0; i < k; i++) {
      cin >> inputs[i];
    }

    for (int i = 0; i < k; i++) {
      if ((k-2)%inputs[i] == 0) {
        divisors.push_back(inputs[i]);
      }
    }
    int size = divisors.size();
    for (int i = 0; (i < size && !found); i++) {
      for (int j = 0; j < size; j++) {
          if (i != j && divisors[i]*divisors[j] == (k-2)) {
              cout << divisors[i] << " " << divisors[j] << "\n";
              found = true;
              break;
          }
      }
    }    
  }
  return 0;
}