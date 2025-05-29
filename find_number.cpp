#include <iostream>
using namespace std;

void sum_pairs(int a[], int size, int value) {
    for (int i = 0; i < size; i++) {
      for (int j = i+1; j < size; j++) {
         if (a[i] + a[j] == value)
            cout << a[i] << "," << a[j] << "\n";
      }
    }
}


int main() {
    int array[] = {1,2,3,4,5,6,7};
    sum_pairs(array, sizeof(array)/sizeof(array[0]), 7);
    return 0;
}