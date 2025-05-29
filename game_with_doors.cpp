#include <bits/stdc++.h>
using namespace std;

int main() {
  system("cls");
  int t; cin >> t;
  while(t--) {
    int a, b, x, y, doors, overlapings = 0, 
        alice[100] = {0}, bob[100] = {0};
    vector<int> overlaps;

    cin >> a >> b >> x >> y;

    for (int i = a; i <= b; i++)
      alice[i-1] = i;
    for (int i = x; i <= y; i++)
        bob[i-1] = i;

    for (int i = 0; i < 100; i++) {
      if (alice[i] == bob[i] && alice[i] != 0) {
          overlapings++;
          overlaps.push_back(alice[i]);
      }
    }
    if (overlapings == 0) {
      doors = 1;
    } else {
      if (overlaps[0] == a && a == x && overlaps[overlapings-1] == b && b == y) {
        doors = overlapings -1;        
      } else if (overlaps[0] == a && a == x || overlaps[overlapings-1] == b && b == y) {
        doors = overlapings;
      } else {
        doors = overlapings + 1;
      }
    }
    cout << doors << "\n";
  }
  
  return 0;
}