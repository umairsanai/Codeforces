#include <bits/stdc++.h>
using namespace std;

int index = -1;

bool haveDistinct(string a, int size) {
  for (int i = 1; i < size; i++) {
    if (a[i-1] != a[i]) {
      index = i;
      return true;
    }
  }
  return false;
}

int main() {
  system("cls");
  int t; cin >> t;
  while(t--) {
    string a;
    cin >> a;
    int aL = a.length();
    int moves = 0;
    while(haveDistinct(a,aL)) {
      if (index != -1) {
        moves++;
        a.erase(a.begin() + index - 1, a.begin() + index + 1);
        index = -1;
        aL -= 2;
      }
    }
    cout << (moves%2 ? "DA" : "NET") << "\n";
  }
  return 0;
}