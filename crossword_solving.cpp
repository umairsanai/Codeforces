#include <bits/stdc++.h>
using namespace std;

int main() {
  system("cls");

  int n, m, sL, tL, minIndex = 0;
  string s,t;
  cin >> n >> m >> s >> t;
  sL = s.length(); tL = t.length();
  
  vector<vector<int>> indexes(tL-sL+1); 
  vector<int> sizes(tL-sL+1, 0);

  for (int i = 0; i < tL-sL+1; i++) {
    for (int j = i, k = 0; (j < m && k < n); j++, k++) {
        if (s[k] != t[j]) {
          indexes[i].push_back(k+1);
          sizes[i]++;
        }
    }
  }
  for (int i = 1; i < tL-sL+1; i++)
    if (sizes[minIndex] > sizes[i]) minIndex = i;

    cout << sizes[minIndex] << "\n";
  for (int i = 0; i < sizes[minIndex]; i++)
      cout << indexes[minIndex][i] << " ";
  return 0;
}