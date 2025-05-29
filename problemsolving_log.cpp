#include <bits/stdc++.h>
using namespace std;

int main()
{
  cin.tie(0)->sync_with_stdio(0);
  int t;
  cin >> t;
  while (t--)
  {
    int n, minutes = 0, problem_count = 0;
    string a;
    cin >> n >> a;
    sort(a.begin(), a.end());
    for (int i = 0; i < n;) {
      do {
        minutes++;
        i++;
      } while (a[i - 1] == a[i]);
      if (minutes > (a[i-1] - 'A')) 
        problem_count++;
      minutes = 0;
    }
    cout << problem_count << endl;
  }
  return 0;
}