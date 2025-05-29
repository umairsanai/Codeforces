#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, distincts = 0;
  string a;
  vector <string> characters(26);
  vector <int>  sizes(26, 0);
  cin >> n >> a;

  for (int i = 0; i < n; i++) {
    characters[a[i]-'a'] += a[i];
    sizes[a[i]-'a']++;
  }
  for (int i = 0; i < 26; i++)
    if (sizes[i]) distincts++;

  cout << ((n <= 26) ? n - distincts : -1) << "\n";
  return 0;
}