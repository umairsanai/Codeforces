#include <bits/stdc++.h>
using namespace std;

int maxOf(vector<int> a, int size) {
  int maxIndex = 0;
  for (int i = 0; i < size; i++) {
    if (a[maxIndex] < a[i]) {
      maxIndex = i;
    }
  }
  return a[maxIndex];
}

int main() {
  system("cls");
  int t;  cin >> t;
  while(t--) {
    int n, k, times = 0, size;
    string password;
    cin >> n >> password >> k;
    char special_letters[k];
    vector<int> inds;

    for (int i = 0; i < k; i++)
      cin >> special_letters[i];
    
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < n; j++) {
            if (special_letters[i] == password[j])
              inds.push_back(j);
        }
    }
    size = inds.size();
    sort(inds.begin(), inds.end());

    while (size > 0 && maxOf(inds, size) > 0) {
      for (int i = 0; i < size; i++) 
      {
          inds[i] -= (i+1);
          if (inds[i] < 0) {
            inds.erase(inds.begin() + i--);
            size--;
          }
      }
      sort(inds.begin(), inds.end());
      inds.erase(unique(inds.begin(), inds.end()), inds.end());
      size = inds.size();
      times++;
    }
    cout << times << "\n";
  }
  return 0;
}