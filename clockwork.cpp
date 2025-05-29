#include <bits/stdc++.h>
using namespace std;

void decreaseBy(int a[], int size, int factor) {
  for (int i = 0; i < size; i++) {
    a[i] -= factor;
  }
}

int main() {
  int t; cin >> t;
  while (t--) 
  {
    int n, min = 0, minIndex = 0, distance;
    cin >> n;
    int *original = new int[n], *a = new int[n];
    bool lost = false;

    for (int i = 0; i < n; i++) 
    {
      cin >> original[i];  
      if (i == 0) {
        min = original[0];
      }
      if (original[i] < min) {
        min = original[i];
        minIndex = i;
      }
      a[i] = original[i];
    }


    for (int j = 0; j < n; j++) {
      distance = 0;
      if (n%2) {
        if (j < n/2) {
          distance = 2*(n-j-1);
        } else if (j >= n/2) {
          distance = 2*(j);
        }
      } else {
        if (j < n/2) {
          distance = 2*(n-j-1);
        } else if (j >= n/2) {
          distance = 2*(j);
        }
      }
      if (distance >= original[j]) {
        lost = true;
        break;
      }      
    }
    cout << (!lost ? "YES" : "NO") << "\n";
  }  
  return 0;
}