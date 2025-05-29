#include <bits/stdc++.h>
using namespace std;

int main() {
  system("cls");
  int n, q, replacements = 0;
  string s;
  cin >> n >> q >> s;
  int pos[q];
  char c[q];

  for (int i = 0; i < q; i++)
    cin >> pos[i] >> c[i]; 

  for (int i = 1; i < n-1; i++)
    if (s[i-1] == 'a' && s[i] == 'b' && s[i+1] == 'c')
      replacements++;

  for (int i = 0; i < q; i++) {
    int k = pos[i]-1;
    if (s[k] != c[i]) {
      string temp = s;
      s[k] = c[i];

      if ((c[i] == 'a') && ((k + 2 < n) && (temp[k+1] == 'b' && temp[k+2] == 'c'))) {
          replacements++;
      } else if ((c[i] == 'b') && (k - 1 >= 0 && k + 1 < n) &&  (temp[k-1] == 'a' && temp[k+1] == 'c')) {
          replacements++;
      } else if ((c[i] == 'c') && (k - 2 >= 0) && (temp[k-2] == 'a' && temp[k-1] == 'b')) {
          replacements++;
      }
      if ((temp[k] == 'a') && ((k + 2 < n) && (temp[k+1] == 'b' && temp[k+2] == 'c'))) {
        replacements--;
      } else if ((temp[k] == 'b') && (k - 1 >= 0 && k + 1 < n) &&  (temp[k-1] == 'a' && temp[k+1] == 'c')) {
        replacements--;
      } else if ((temp[k] == 'c') && (k - 2 >= 0) && (temp[k-2] == 'a' && temp[k-1] == 'b')) {
        replacements--;
      }
    }
    cout << replacements << "\n";
  }
  return 0;
}