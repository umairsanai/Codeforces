#include <iostream>
using namespace std;

bool isVowel(char a) {
  if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u') {
    return true;
  }
  return false;
}

int main() {
  system("cls");
  string s, t;
  cin >> s >> t;
  int vowl_s = 0, vowl_t = 0, cons_s = 0, cons_t = 0;
  bool flag = false;
  if (s.length() != t.length()) {
    cout << "NO\n";
  } else {
    for (int i = 0, x = s.length(); i < x; i++) {
      if (isVowel(s[i]))
        vowl_s++;
      else 
        cons_s++;
      if (isVowel(t[i]))
        vowl_t++;
      else
        cons_t++;
      if ((isVowel(s[i]) && !isVowel(t[i])) || !isVowel(s[i]) && isVowel(t[i])) {
        flag = true;
        break;
      }      
    }
    cout << ((vowl_s == vowl_t && cons_s == cons_t && !flag) ? "YES\n" : "NO\n");
  }
  return 0;
}