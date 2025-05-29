#include <iostream>
using namespace std;

int main() {
  
  int t; cin >> t;
  char events[t];
  int people[t];
  int people_remaining = 0;
  for (int i = 0; i < t; i++) {
    cin >> events[i] >> people[i];
    if (events[i] == 'P'){
      people_remaining += people[i];
    } else {
      if (people_remaining < people[i]) {
        cout << "YES\n";
        people_remaining = 0;
      } else {
        cout << "NO\n";
        people_remaining -= people[i];
      }
    }
  }
  return 0;
}