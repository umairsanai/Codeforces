#include <bits/stdc++.h>
using namespace std;

int main() {
  system("cls");
  string t, s, s_new, end, indexes;
  cin >> t;
  int tL = t.length(), possible = 1;

  for (int i = 0; i < tL; i++) {
    if (t[i] != 'a') {
      s_new += t[i];
      indexes += char(i+'0');
    }
  }
  if (s_new.length()%2)
    possible = 0;
  for (int i = 0, x = s_new.length(); i < x/2; i++)
    s_new.pop_back();
  for (int i = 0, x = s_new.length(); (i < x && possible); i++) {
    if (s_new[x-i-1] == t[tL-i-1])
      t.pop_back();
    else 
      possible = 0;
  }
  cout << (possible ? t : ":(") << "\n";
  return 0;
}