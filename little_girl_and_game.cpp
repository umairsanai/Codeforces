#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(vector<string> a, vector<int> sizes, int length) {
  int odds = 0;
  for (int i = 0; i < 26; i++) {
    if (sizes[i]%2) {
      if (length%2 == 0) return false;
      else if (length%2 == 1) {
        if (odds != 1) odds++;
        else return false;
      }
    }
  }
  return true;
}

int main() {
  system("cls");
  string a; 
  cin >> a;
  int aL = a.length(), moves = 0;
  vector<string> characters(26, "");
  vector<int> sizes(26,0);

  for (int i = 0; i < aL; i++) {
    characters[a[i]-'a'] += a[i];
    sizes[a[i]-'a']++;
  }
  while(!isPalindrome(characters, sizes, aL)) {
    for (int i = 0; i < 26; i++) {
      if (sizes[i]%2) {
        characters[i].pop_back();
        sizes[i]--;
        aL--;
        break;
      }
    }
    moves++;
  }
  cout << ((moves%2) ? "Second" : "First") << "\n";
  return 0;
}