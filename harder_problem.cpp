#include <bits/stdc++.h>
using namespace std;

typedef uint64_t num;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  system("cls");

  int t, n; cin >> t;

  while (t--) {
    cin >> n;

    vector<int> a(n), b(n), frequency(n, 0), copy;
    int x = 0;

    for (int i = 0; i < n; i++) {
      cin >> a[i];
      if (!frequency[a[i]-1]) {
        b[x++] = a[i];
        copy.push_back(a[i]);
        frequency[a[i]-1]++;
      }
    }

    sort(copy.begin(), copy.end());

    if (copy.size() && copy[0] > 1) {
      int k = 1;
      while (x < n && k < copy[0])
        b[x++] = k++;
    }

    for (int i = 1; i < copy.size(); i++) {
      if (x >= n)
        break;
      if (abs(copy[i]-copy[i-1]) > 1) {
        while (copy[i-1]+1 != copy[i])
          b[x++] = (++copy[i-1]);
      }
    }
    while (x < n)
      b[x++] = (++copy[copy.size()-1]);

    for (int i = 0; i < n; i++)
      cout << b[i] << " ";
    cout << "\n";
  }
  return 0;
}