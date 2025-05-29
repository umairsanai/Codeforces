#include <bits/stdc++.h>
using namespace std;

char mex(string a, int size) {
  char mex = 'a';
  bool mex_found = true;

  sort(a.begin(), a.end());

  for (int i = 0; i < 26; i++) {
    mex_found = true;
    for (int j = 0; j < size; j++) {
      if (a[j] == mex) {
        mex_found = false;
        break;
      }
    }
    if (mex_found) {
      return mex;
    }
    mex++;
  }
}
int maxIndex(vector<int> a, int size) {
  int maxIndex = 0;
  for (int i = 1; i < size; i++) {
    if (a[maxIndex] < a[i]) {
      maxIndex = i;
    }
  }
  return maxIndex;
}

int main() {
  system("cls");
  int t; cin >> t;
  while (t--) {
    int n, k, x, size = 0, characters_size = 25;
    char temp;

    cin >> n >> k;
    x = n/k;

    string subsets[k], mex_string;
    vector<string> characters(characters_size);
    vector<int> char_remaining(characters_size, 0);

    for (int i = 0; i < n; i++) {
      cin >> temp;
      characters[temp-'a'].push_back(temp);
      char_remaining[temp-'a']++;
    }
    for (int i = 0; i < characters_size; i++) {
      while (!char_remaining[i] && i < characters_size) {
        characters.erase(characters.begin() + i);
        char_remaining.erase(char_remaining.begin() + i);
        characters_size--;
      }
    }

    for (int i = 0; i < k; i++) {
      size = 0;      
      for (int j = 0; (j < characters_size && size < x); j++) {
          if (char_remaining[j]) {
            subsets[i].push_back(characters[j][0]);
            characters[j].pop_back();
            char_remaining[j]--;
            size++;
          } else {
            characters.erase(characters.begin() + j);
            char_remaining.erase(char_remaining.begin() + j);
            characters_size--;
          }
      }
      while (size < x) {
        int maxI = maxIndex(char_remaining, characters_size);
        subsets[i].push_back(characters[maxI][0]);
        characters[maxI].pop_back();
        char_remaining[maxI]--;
        size++;
        if (!char_remaining[maxI]) {
          characters.erase(characters.begin() + maxI);
          char_remaining.erase(char_remaining.begin() + maxI);
          characters_size--;
        }
      }
      // cout << subsets[i] << " ";
      // cout << "size = " << size << "  \n";
    }
    for (int i = 0; i < k; i++) {
      mex_string += mex(subsets[i], x);
    } 
    cout << mex_string << "\n"; 

  }
  return 0;
}