#include <bits/stdc++.h>
using namespace std;


int main() {
  cin.tie(0)->sync_with_stdio(0);

  string a; cin >> a;
  bool possible = true;
  char max = 'a';
  
  vector<int> first_indexes(26, -1);

  for (int i = 0; i < a.length(); i++) {
    if (first_indexes[a[i]-'a'] == -1) {
      first_indexes[a[i]-'a'] = i;
    }
    if (max < a[i]) {
      max = a[i];
    }    
  }
  for (int i = 0; i < (max-'a'); i++) {
      if (first_indexes[i] == -1) {
          possible = false;
          break;
      }    
  }
  if (possible) {
    first_indexes.erase(remove(first_indexes.begin(), first_indexes.end(), -1), first_indexes.end());
    for (int i = 0; i < first_indexes.size()-1; i++) {
        if (first_indexes[i] > first_indexes[i+1]) {
          possible = false;
          break;
        }
    }
  }  
  cout << (possible ? "YES" : "NO") << "\n";

  return 0;
}