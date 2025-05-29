#include <bits/stdc++.h>
using namespace std;

int main() {
  system("cls");
  
  int n, m;
  cin >> n >> m;
  string left, middle, right;
  vector<string> a(n);
  vector<int> counts(n, 0);

  for (int i = 0; i < n; i++)
    cin >> a[i];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        if (i != j) {
          string temp = a[j];
          reverse(a[j].begin(), a[j].end());
          if (a[i] == temp) {
              left += a[i];
              temp = a[j];
              temp += right;
              right = temp;
              counts[i]++;
          }
        }
    }
    {
      bool isPalindrome = true, looped = false;
      for (int j = 0; (j < m/2 && isPalindrome); j++) {
        looped = true;
        if (a[i][j] != a[i][m-j-1])
          isPalindrome = false;
      }
      if ((looped && isPalindrome) || a[i].length() == 1)
        middle = a[i];
    }
  }
  
  for (int i = 0; i < n; i++) {

  }
  cout << (2*left.length() + middle.length()) << "\n" << (left + middle + right) << "\n";
  return 0;
}