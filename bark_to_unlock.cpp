#include <iostream>
using namespace std;

int main() {
  int n, lS = 0, rF = 0;
  string password, word;
  cin >> password >> n;
  while(n--) {
    cin >> word;
    if (word[0] == password[1]) rF = 1;
    if (word[1] == password[0]) lS  = 1;
    if (word == password) lS = rF = 1;
  }
  cout << ((rF && lS) ? "YES\n" : "NO\n");
}