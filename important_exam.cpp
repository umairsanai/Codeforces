#include <iostream>
using namespace std;

int main() {
  int n, m, score = 0;
  cin >> n >> m;
  string a[n];
  int points[m];

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < m; i++) {
    cin >> points[i];
  }

  for (int i = 0; i < m; i++) {
    int frequency[5] = {0}, maxIndex = 0;    
    for (int j = 0; j < n; j++) {
      frequency[a[j][i]-'A']++;
    }
    for (int j = 1; j < 5; j++) {
      if (frequency[maxIndex] < frequency[j]) 
        maxIndex = j;  
    }
    score += frequency[maxIndex]*points[i];
  }
  cout << score << "\n";
  return 0;
}