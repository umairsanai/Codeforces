#include <bits/stdc++.h>
using namespace std;

#define numbers 31

typedef uint64_t bnum;

int main() {
  system("cls");

  bnum t, n, k, a[] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608, 16777216, 33554432, 67108864, 134217728, 268435456, 536870912, 1073741824};
  cin >> t;
  while (t--) {
    cin >> n >> k;
    if (n == 1) {
      cout << k << "\n";
    } else {
      bnum biggest;
      for (int i = 0; i < numbers; i++) {
        if (a[i] > k) {
          biggest = a[i-1]-1;
          cout << biggest << " ";
          break;
        } else if (a[i] == k) {
          biggest = a[i]-1;
          cout << biggest << " ";
          break;
        }
      }
      bnum remaining = (k - biggest);
      cout << remaining << " ";
      for (int i = 0; i < n-2; i++) {
        cout << 0 << " ";
      }
      cout << "\n";
    }
  }

  return 0;
}