#include <bits/stdc++.h>
using namespace std;

int main() {
  system("cls");

  int t, n;  cin >> t;
  while(t--) {
    int negative_differences = 0;
    cin >> n;
    string ans;
    int a[n], b[n], differences[n];

    for (int i = 0; i < n; i++)
      cin >> a[i];
    for (int i = 0; i < n; i++) {
      cin >> b[i];
      differences[i] = a[i] - b[i];
      if (differences[i] < 0)
        negative_differences++;
    }

    if (negative_differences > 1)
      ans = "NO\n";
    else if (negative_differences == 1) {
        int minPositiveIndex = 0, maxNegativeIndex = 0;
        for (int i = 1; i < n; i++) {
          
          if (differences[minPositiveIndex] < 0 && differences[i] >= 0)
            minPositiveIndex = i;
          else if (differences[minPositiveIndex] > differences[i] && differences[i] >= 0)
            minPositiveIndex = i;
          
          if (differences[maxNegativeIndex] > differences[i] && differences[i] < 0)
            maxNegativeIndex = i;
        }
        ans = ((differences[maxNegativeIndex] + differences[minPositiveIndex] < 0) ? "NO\n" : "YES\n");
    } else
      ans = "YES\n";
    
    cout << ans;

  }
  return 0;
}