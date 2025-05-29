#include <iostream>
using namespace std;

int main() {

  int t;
  cin >> t;
  while (t--) {
    int m,a,b,c, front_seats, back_seats, total_seated = 0;
    cin >> m >> a >> b >> c;
    front_seats = m;
    back_seats = m;

    // A monkeys
    if (m <= a) {
      front_seats = 0;
      total_seated += m;
    } else {
      total_seated += a;
      front_seats -= a;
    }

    // B monkeys
    if (m <= b) {
      back_seats = 0;
      total_seated += m;
    } else {
      total_seated += b;
      back_seats -= b;
    }

    // C monkeys
    if (front_seats > 0 && c > 0) {
      if (front_seats <= c) {
        total_seated += front_seats;
        c -= front_seats;
        front_seats = 0;
      } else {
        front_seats -= c;
        total_seated += c;
        c = 0;
      }
    } 
    if (back_seats > 0 && c > 0) {
      if (back_seats <= c) {
        total_seated += back_seats;
        c -= back_seats;
        back_seats = 0;
      } else {
        back_seats -= c;
        total_seated += c;
        c = 0;
      }
    } 
    cout << total_seated << "\n";
  }
  
  return 0;
}