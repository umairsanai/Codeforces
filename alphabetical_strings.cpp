#include <bits/stdc++.h>
using namespace std;

bool isMissing(string a, int n) {
  sort(a.begin(), a.end());
  for (int i = 0; i < n; i++) {
      if (i != a[i]-'a'){
        return true;
      }
  }
  return false;
}
int main() {
  cin.tie(0)->sync_with_stdio(0);
  int t; cin >> t;
  string outputs[t];
  while (t--) {

      string a;
      char current_char = 'b';
      cin >> a;
      int n = a.length(), i = 0, left_length = 1, right_length = 1;
      bool missing = isMissing(a,n), isAlphabetical = true;
      missing ? isAlphabetical = false : true;

      for (; (i < n && a[i] != 'a' && isAlphabetical); i++) {}

      while ((left_length + right_length) < n && isAlphabetical) 
      {
        if (a[i-left_length] == current_char)
        {
          current_char = char(current_char+1);
          left_length++;
        } 
        else if (a[i+right_length] == current_char)
        {
          current_char = char(current_char+1);
          right_length++;
        } 
        else 
        {
          isAlphabetical = false;
        }
      }
      cout << (isAlphabetical ? "YES" : "NO") << "\n";
  }
  return 0;
}