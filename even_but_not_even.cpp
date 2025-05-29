#include <iostream>
using namespace std;

int main() {
  system("cls");
  int t; cin >> t;
  while (t--) {
    int length, sum = 0, i = 0;
    string a;

    cin >> length >> a;

    for (int i = 0; i < length; i++) {
      sum += (a[i] - '0');
    }

    for (int i = 0; i < length; i++) {
      if (a[i] == '0') {
        a.erase(a.begin() + i);
        i--;
        length--;
      }
    }

    while ((((a[length-1] - '0') % 2) == 0) && length > 1) {
      sum -= (a[length-1] - '0');
      a.pop_back();
      length--;
    }
    while (sum%2 && i < length && length > 1) {
      if ((a[i]-'0')%2){
        sum -= (a[i] - '0');
        a.erase(a.begin() + i);
        length--;
        break;
      }
      i++;
    }
    
    if (!(sum%2) && (a[length-1]-'0')%2) {
      cout << a;
    } else {
      cout << -1;
    }
    cout << "\n";
  }  
  return 0;
}