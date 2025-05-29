#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  string a, b;
  cin >> a >> b;

  int left = 0, right = 0, remaining = b.length();
  bool possible = true;
  for (int i = 0; (i < a.length() && a[i] != '|'); i++) {
      left++;
  }
  right = a.length()-1-left;

  if (left > right) 
  {
      if (left-right <= remaining) {
        a += b.substr(0, (left-right));
        b.erase(b.begin(), b.begin()+(left-right));
        remaining -= (left-right);
        right = left;
        if (remaining%2) {
          possible = false;
        } else {
            a = b.substr(0, b.length()/2) + a;
            a += b.substr(b.length()/2, b.length());
        }
      } else {
        possible = false;
      }
  } else if (left < right) {
    if (right-left <= remaining) {
      a = b.substr(0, (right-left)) + a;
      b.erase(b.begin(), b.begin()+(right-left));
      remaining -= (right-left);
      left = right;
      if (remaining%2) {
        possible = false;
      } else {
        a = b.substr(0, b.length()/2) + a;
        a += b.substr(b.length()/2, b.length());
      }
    } else {
      possible = false;
    }
  } else {
    if (remaining%2) {
      possible = false;
    } else {
      a = b.substr(0, b.length()/2) + a;
      a += b.substr(b.length()/2, b.length());
    }
  }
  if (!possible)
    a = "Impossible";
  cout << a << "\n"; 

  return 0;
}