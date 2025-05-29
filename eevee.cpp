#include <bits/stdc++.h>
using namespace std;

int main() {
  system("cls");

  int n, names_count = 8;
  string a;
  vector<int> indexes;
  vector<string> names = {"vaporeon", "jolteon", "flareon", "espeon", "umbreon", "leafeon", "glaceon", "sylveon"};

  cin >> n >> a;

  if (n == 8) {
    cout << names[0];
  } else if (n == 6) {
    cout << names[3];
  } else {
    for (int i = 0; i < names_count; i++) {
      if (names[i].length() != n) {
        names.erase(names.begin() + i--);
        names_count--;
      }
    }  
    for (int i = 0; i < n; i++) {
      if (a[i] != '.') {
        for (int j = 0; j < names_count; j++) {
          if (a[i] == names[j][i])
              indexes.push_back(j);
          else {
            for (int k = 0; k < indexes.size(); k++) {
              if (indexes[k] == j)
                indexes.erase(indexes.begin() + k--);
            }
          }
        }
      }
      if (indexes.size() == 1)
        break;
    }
    cout << names[indexes[0]];
  }
  cout << "\n";
  return 0;
}