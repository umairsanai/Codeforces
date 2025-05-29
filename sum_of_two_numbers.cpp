#include <bits/stdc++.h>
using namespace std;

typedef uint64_t num;

int digitSum(int a) {
  int sum = 0;
  while (a > 0) {
    sum += a%10;
    a /= 10;
  }
  return sum;
}

int main() {
  system("cls");
  cin.tie(0)->sync_with_stdio(0);

  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    int left = n/2, right = n-left;

    if (n%2) {
      int left_sum = digitSum(left);
      int right_sum = digitSum(right);
      int difference = abs(left_sum-right_sum);
      while (difference > 1) {
        left -= difference/2;
        right = n - left;
        left_sum = digitSum(left);
        right_sum = digitSum(right);
        difference = abs(left_sum-right_sum);
      }
    }
    cout << left << " " << right << "\n";
  }
  return 0;
}