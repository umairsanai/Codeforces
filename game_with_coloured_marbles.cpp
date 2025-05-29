#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {

    int n; cin >> n;
    int c[n], alice_score = 0;

    for (int i = 0; i < n; i++)
      cin >> c[i];

    sort(c, c+n);
    vector<int> repeating_colors, unique_colors;

    if (n < 2) {
      cout << 2;
      return 0;
    }

    // Differentiating Unique and Repeating Colors
    if (n >= 2) {
      if (c[0] != c[1]) {
        unique_colors.push_back(c[0]);
      } else {
        repeating_colors.push_back(c[0]);
      }
    }
    if (c[n-2] != c[n-1]) {
      unique_colors.push_back(c[n-1]);
    } else {
      repeating_colors.push_back(c[n-1]);
    }

    for (int i = 1; i < n-1; i++) {
      if (c[i-1] != c[i] && c[i] != c[i+1]) {
        unique_colors.push_back(c[i]);
      } else {
        repeating_colors.push_back(c[i]);
      }
    }
    // Cleaning Repeating Colors vector


    for (int i = 1; i < repeating_colors.size(); i++) {
      if (repeating_colors[i-1] == repeating_colors[i]) {
        repeating_colors.erase(repeating_colors.begin() + i-1);
        i--;
      }
    }


    int u = unique_colors.size(), repeating = repeating_colors.size();

    // cout << "Unique Colors: ";
    // for (int i = 0; i < u; i++) {
    //   cout << unique_colors[i] << " ";
    // }
    // cout << "\nRepeating Colors: ";
    // for (int i = 0; i < repeating; i++) {
    //   cout << repeating_colors[i] << " ";
    // }
    // cout << "\nUnique Number: " << u << "   Repeating Number: " << repeating << "\n";


    if (u != 0) {
      if (u%2 == 1) {
        alice_score += 2*(u/2 + 1);
      } else {
        alice_score += 2*(u/2);
      }
    }
    if (repeating != 0) {
      if (repeating%2 == 1) {
        alice_score += repeating/2 + 1;
      } else {
        alice_score += repeating;
      }
    }
    cout << alice_score << "\n";
  }
  return 0;
}