#include <bits/stdc++.h>
using namespace std;

int main()
{
  int test_cases, n;
  cin >> test_cases;
  while (test_cases--) {
    string temp, r, input;
    cin >> n >> input;
    temp = input;

    sort(temp.begin(), temp.end());

    for (int i = 0; i < n; i++) {
      r += temp[i];
      while (temp[i] == temp[i + 1])
        i++;
    }
    
    for (int i = 0; i < n; i++) {
      for (int j = 0, m = r.length(); j < m; j++) {
        if (input[i] == r[j]) {
          temp[i] = r[m - j - 1];
          break;
        }
      }
    }
    cout << temp << "\n";
  }
  return 0;
}