#include <iostream>
using namespace std;
bool isConsonant(char a) {
  if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
    return false;
  return true;
}

int main() {
  system("cls");
  string a;
  bool flag = true;
  cin >> a;
  int length = a.length();

    if (isConsonant(a[length-1]) && a[length-1] != 'n')
      flag = false;
    for (int i = 0; (i < length-1 && flag); i++) {    
      if (isConsonant(a[i]) && a[i] != 'n')
          flag = (!isConsonant(a[i+1]) ? true : false);
    }
  cout << (flag ? "YES\n" : "NO\n");
  return 0;
}