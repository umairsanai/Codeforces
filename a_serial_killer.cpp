#include <bits/stdc++.h>
using namespace std;

int main() {
  system("cls");

  int n;
  string a, b, x, y;
  cin >> a >> b >> n;
  string output[n+1][2];
  output[0][0] = a, output[0][1] = b;

  for (int i = 1; i <= n; i++) {
    cin >> x >> y;
    if (x == output[i-1][0] || x == output[i-1][1]) {
      output[i][0] = y;
      output[i][1] = ((x == output[i-1][0]) ? output[i-1][1] : output[i-1][0]);
    }
    if (y == output[i-1][0] || y == output[i-1][1]) {
      output[i][0] = x;
      output[i][1] = ((y == output[i-1][0]) ? output[i-1][1] : output[i-1][0]);
    } 
  }
  cout << "\n\n";
  for (int i = 0; i <= n; i++)
    cout << output[i][0] << " " << output[i][1] << "\n";
  return 0;
}