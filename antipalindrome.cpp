#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string a, int n) {
  for (int i = 0; i < n/2; i++) {
      if (a[i] != a[n-i-1])
        return false;
  }
  return true;
}

int main() {
  system("cls");

  string a; cin >> a;
  int n = a.length();

  while (isPalindrome(a,n) && n > 0) {
      a.erase(a.begin());
      n--;
  }
  cout << n << "\n";
  return 0;
}