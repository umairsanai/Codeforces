#include <bits/stdc++.h>
using namespace std;

void printArray(int array[], int size) {
    if (size == 0)
        return;
    cout << array[size-1] << " ";
    printArray(array, size-1);
}

int main() {
  int array[5] = {1,2,3,4,5};
  printArray(array, 5);  
  return 0;
}