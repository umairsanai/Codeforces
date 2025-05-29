#include <bits/stdc++.h>
using namespace std;

int main() {
  system("cls");
  int n, z = 0;
  cin >> n;
  string x;
  vector<string> words(n);

  for(int i = 0; i < n; i++) {
    cin >> x;
    bool matched = false;
    auto b = x.begin(), e = x.end(); 
    sort(b, e);

    auto u = unique(b, e);
    x.erase(u, e);

    for (int j = 0; (j < z && !matched); j++) {
      if (words[j] == x)
        matched = true;
    }
    if (!matched)
      words[z++] = x;
  }
  cout << z << "\n";
  return 0;
}