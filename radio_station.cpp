#include <bits/stdc++.h>
using namespace std;

int main() {
  system("cls");

  int n, m;
  cin >> n >> m;
  string names[n][2], commands[m][3];

  for (int i = 0; i < n; i++)
    cin >> names[i][0] >> names[i][1];
  for (int i = 0; i < m; i++) {
    cin >> commands[i][0] >> commands[i][1];
    commands[i][1].pop_back();
    commands[i][2] = "";
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
        if (names[i][1] == commands[j][1])
            commands[j][2] = names[i][0];
    }
  }
  for (int i = 0; i < m; i++)
    cout << commands[i][0] << " " << commands[i][1] << "; #" << commands[i][2] << "\n";
  
  return 0;
}