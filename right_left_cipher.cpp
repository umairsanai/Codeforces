#include <iostream>
using namespace std;

int main() {
  string a, output; cin >> a;
  int length = a.length();

  for (int i = 0, start = 0, end = length-1; start <= end; i++) {
    if (length%2 == 0)
      output += ((i%2 == 0) ? a[end--] : a[start++]);
    else
      output += ((i%2 == 0) ? a[start++] : a[end--]);
  }
  for (int i = 0; i < length/2; i++) {
    int temp = output[i];
    output[i] = output[length-i-1];
    output[length-i-1] = temp;
  }
  cout << output << "\n";
  return 0;
}