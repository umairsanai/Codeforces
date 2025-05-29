#include <iostream>
using namespace std;

bool isVowel(char a) {
  if (a == 'A' || a == 'a' || a == 'E' || a == 'e' || a == 'I' || a == 'i' ||
      a == 'O' || a == 'o' || a == 'U' || a == 'u' || a == 'Y' || a == 'y') {
    return true;
  } else {
    return false;
  }
}

int main() {
  string a, b;
  cin >> a;
  int length = a.length();
  for (int i = 0; i < length; i++) {
      if (!isVowel(a[i])) {
        b += '.';
        if (a[i] >= 'B' && a[i] <= 'Z') {
          b += (a[i] + 32);
        } else {
          b += a[i];
        }
      } 
  }
  cout << b << "\n";
  return 0;
}