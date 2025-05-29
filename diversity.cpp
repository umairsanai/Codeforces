#include <bits/stdc++.h>
using namespace std;

int main() {
  system("cls");
  int k, distincts = 0;
  string a;

  cin >> a >> k; 

  if (k <= a.length()) {
    string characters[26];
    int lengths[26] = {0};

    for (int i = 0, n = a.length(); i < n; i++) {
      characters[a[i] - 'a'].push_back(a[i]);
      lengths[a[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
      if (lengths[i]) distincts++;
    cout << ((k > distincts) ? (k - distincts) : 0 ) << "\n"; 
  } else
    cout << "impossible\n";
  
  return 0;
}