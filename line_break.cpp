#include <iostream>
using namespace std;

int main() {

  int t;
  cin >> t;
  while (t--) {
    int n, m, word_count = 0, letters_on_first_line = 0;
    cin >> n >> m;
    string words[n];
    for (int i = 0; i < n; i++) {
      cin >> words[i];
    }
    for (int i = 0; i < n; i++) {
      letters_on_first_line += words[i].length();
      if (letters_on_first_line <= m) {
        word_count++;
      } else {
        break;
      }
    }
    cout << word_count << "\n";
  }
  
  return 0;
}