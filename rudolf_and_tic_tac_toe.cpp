#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int t; cin >> t;
  while (t--) {
    string a[3];
    char winner = 'A';
    cin >> a[0] >> a[1] >> a[2];
    
    if (((a[0][0] == a[0][1] && a[0][1] == a[0][2]) || (a[0][0] == a[1][0] && a[1][0] == a[2][0]) || (a[0][0] == a[1][1] && a[1][1] == a[2][2])) && a[0][0] != '.') 
    {
      winner = a[0][0];
    } 
    else if (((a[1][0] == a[1][1] && a[1][1] == a[1][2]) || (a[0][1] == a[1][1] && a[1][1] == a[2][1]) || (a[0][2] == a[1][1] && a[1][1] == a[2][0])) && a[1][1] != '.')
    {
      winner = a[1][1];
    } 
    else if (((a[2][0] == a[2][1] && a[2][1] == a[2][2]) || (a[0][2] == a[1][2] && a[1][2] == a[2][2])) && a[2][2] != '.')
    {
      winner = a[2][2];
    } 
    if (winner == 'X')      cout << "X\n";
    else if (winner == 'O') cout << "O\n";
    else if (winner == '+') cout << "+\n";
    else                    cout << "DRAW\n";
  }
  return 0;
}