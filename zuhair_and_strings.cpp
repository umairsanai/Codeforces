#include <bits/stdc++.h>
using namespace std;

int main() {
  string a;
  int n, k, x = 0;
  vector<int> v(26, 0);
  cin >> n >> k >> a;

  if (k > 1) {
    for (int i = 0; i < n-1; i++) {
      string temp = "";
      int tempLength = 0, looped = 0;
      while(a[i] == a[i+1] && tempLength < k && i < n-1) {
        looped = 1;
        temp += a[i++];
        tempLength++;
      }
      if (looped)
        i--;
      if (looped && tempLength < k) {
        temp += a[i];
        tempLength++;
      }
      if (tempLength == k)
        v[temp[0]-'a']++;
    } 
  } else {
    for (int i = 0; i < n; i++)
      v[a[i]-'a']++;
  }
  for (int i = 0; i < 26; i++) {
    if (x < v[i])
      x = v[i];
  }
  cout << x << "\n";
  return 0;
}