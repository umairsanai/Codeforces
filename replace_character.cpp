#include <bits/stdc++.h>
using namespace std;
  

int main() {
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    string a; cin >> a;

    int length = a.length();
    int frequencies[26] = {0};
    char most_repeating = a[0], least_repeating = a[0];

    for (int i = 0; i < length; i++) {
      frequencies[a[i]-'a']++;
    }

    int max = 1, min = n;
    for (int i = 0; i < 26; i++) {
      if (frequencies[i] < min && frequencies[i] > 0) {
        min = frequencies[i];
        least_repeating = char (97 + i);
      }
      if (frequencies[i] >= max) {
          max = frequencies[i];
          most_repeating = char(97 + i);
      }
    }
    for (int i = 0; i < n; i++) {
      if (a[i] == least_repeating) {
        a[i] = most_repeating;
        break;
      }
    }
    cout << a << "\n";
  }
  
  return 0;
}