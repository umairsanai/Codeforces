#include <bits/stdc++.h>
using namespace std;

int main() {
  system("cls");
  int n, x = 0, maxLength = 0;
  string a;
  vector<string> sub_strings(1, "");
  vector<int> lengths(1,0);

  cin >> n >> a;

  for (int i = 0; i < n; i++) {
    bool substringFound = false, capitalFound = false;
    while (a[i] >= 'a' && a[i] <= 'z' && i < n) {
      sub_strings[x] += a[i++];
      lengths[x]++;
      substringFound = true;
    }
    if (substringFound) {
      x++;
      sub_strings.push_back("");
      lengths.push_back(0);
    } 
    while (a[i] >= 'A' && a[i] <= 'Z' && i < n) {
      capitalFound = true;
      i++;
    }
    if (capitalFound) i--;
  }
  for (int i = 0; i < x; i++) {
    auto b = sub_strings[i].begin(), e = sub_strings[i].end();
    sort(b, e);
    auto u = unique(b, e); 
    sub_strings[i].erase(u, e);
    if (maxLength < sub_strings[i].length())
      maxLength = sub_strings[i].length();
  }
  cout << maxLength << "\n";
  return 0;
}