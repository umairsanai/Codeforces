#include <bits/stdc++.h>
using namespace std;

int main() {
  system("cls");

  int t, n, k; cin >> t;
  while(t--) {
    cin >> n >> k;

    if (n/2 + 1 == k) {
      cout << "1\n1\n";
    } else {
      vector<int> left_medians; vector<int> right_medians; vector<int> medians;

      int left = k-1, right = n - k, m = -1, right_med_size, left_med_size, matched = false;

      if (!right || !left) {
        cout << "-1\n";
        continue;
      }

      if ((left%2 && right%2) && (right > 0 && left > 0)) {
        matched = true;
        medians.insert(medians.end(), {1, k, k+1});
      } else if ((!(left%2) && !(right%2)) && (right > 0 && left > 0)) {
        matched = true;
        medians.insert(medians.end(), {1, k-1, k, k+1, k+2});
      } else if (((!(left%2) && right%2) || ((left%2) && !(right%2))) && (right > 0 && left > 0)) {

        for (int i = 1; i <= left; i+=2) {
          if ((!(left%2) && right%2)) {
            if (!((left-1)%i)) {
              left_medians.push_back(i+1);
            }
          } else {
              if (!(left%i))
                left_medians.push_back(i);
          }
        }
        for (int i = 1; i <= right; i+=2) {
          if ((!(left%2) && right%2)) {
            if (!(right%i)) {
              right_medians.push_back(i);
            }
          } else {
              if (!((right-1)%i))
                right_medians.push_back(i+1);
          }            
        }
           
        left_med_size = left_medians.size();
        right_med_size = right_medians.size();

        for (int i = 0; i < left_med_size; i++) {
          for (int j = 0; j < right_med_size; j++) {
            if ((left_medians[i]+right_medians[j]+1)%2 && left_medians[i] == right_medians[j]) {
                m = left_medians[i];
                matched = true;
                break;
            }
          }
          if (matched)
            break;
        }
        if (!(left%2) && right%2) {
          for (int i = 1; i < k; i+=((left-1)/(m-1))) {
            medians.push_back(i);
          }
          for (int i = k+1; i <= n; i+=(right/(m))) {
            medians.push_back(i);
          }
        } else {
          for (int i = 1; i < k; i+=(left/(m))) {
            medians.push_back(i);
          }
          for (int i = k+1; i <= n; i+=((right-1)/(m-1))) {
            medians.push_back(i);
          }
        }
      }  
      
      if (medians[medians.size()/2] == k && matched) {
        cout << medians.size() << "\n";
        for (int i = 0, size = medians.size(); i < size; i++) {
          cout << medians[i] << " ";
        }
        cout << "\n";
      } else {
        cout << "-1\n";
      }
    }
  }
  return 0;
}