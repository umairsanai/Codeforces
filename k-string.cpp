#include <bits/stdc++.h>
using namespace std;

int main() {
  system("cls");
  int k, aL, possible = 1;
  string a, output, temp;
  vector<string> characters(26,"");
  vector<int> sizes(26,0);

  cin >> k >> a;
  aL = a.length();

  for (int i = 0; i < aL; i++) {
    characters[a[i]-'a'] += a[i];
    sizes[a[i]-'a']++;
  }

  for (int i = 0; (i < 26 && possible); i++) {
    if (sizes[i]%k)
      possible = 0;
  }

  if (possible) {
    for (int i = 0; i < 26; i++) {
      if (sizes[i]) {
        for (int j = 0; j < sizes[i]/k; j++)
          temp += characters[i][0];
      }
    }
    for (int i = 0; i < k; i++)
      output += temp;
  }
  cout << (possible ? ((output.length() != aL) ? "-1" : output) : "-1") << "\n";
  return 0;
}