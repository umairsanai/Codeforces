#include <bits/stdc++.h>
using namespace std;

int main() {
  system("cls");

  int n, max = 0;
  string a, output;
  vector<int> frequencies(676,0);

  cin >> n >> a;

  for (int i = 0; i < n-1; i++) {
    frequencies[(a[i]-'A')*26 + (a[i+1]-'A')]++;
  }
  for (int i = 0; i < 676; i++) {
    if (max < frequencies[i]) {
      output = "";
      max = frequencies[i];
      output += (i%26 + 'A');
      output += (i/26 + 'A');
    }
  }
  reverse(output.begin(), output.end());
  cout << output << "\n";  
  return 0;
}