#include <bits/stdc++.h>
using namespace std;

int main() {
  system("cls");
  int t; cin >> t;

  while (t--) {
    string a, b;
    bool matched = false;
    int x = 0, max_string_index = 0, no_of_operations = 0,
        a_starting_index = 0, a_ending_index = 0, b_starting_index = 0, 
        b_ending_index = 0;

    cin >> a >> b;

    if (a==b) {
      cout << no_of_operations << "\n";
      continue;
    }
    
    if (a.length() < b.length()) {
      string temp = a;
      a = b;
      b = temp;
    }

    int aL = a.length(), bL = b.length();
    vector<string> corresponding_strings(1);
    vector <int> string_sizes(1,0);

    for (int i = 0; i < bL; i++) {
      matched = false;
      for (int j = 0; (j < aL); j++) {
        if (b[i] == a[j]) {
          int l = i, m = j;
          while (l < bL && m < aL && b[l] == a[m]) {
            corresponding_strings[x].push_back(b[l]);
            string_sizes[x]++;
            matched = true;
            l++; 
            m++;
          }
          if (matched) {
            matched = false;
            corresponding_strings.push_back("");
            string_sizes.push_back(0);
            x++; 
          }
        }
      }
    }
    // for (int i = 0; i <= x; i++) {
    //   cout << corresponding_strings[i] << " ";
    // }

    for (int i = 1; i <= x; i++) {
      if (string_sizes[max_string_index] < string_sizes[i])
        max_string_index = i;
    }

    if (corresponding_strings[max_string_index].size()) {
        for (int i = 0; i < aL; i++) {
          if (corresponding_strings[max_string_index][0] == a[i] && 
              corresponding_strings[max_string_index][string_sizes[max_string_index]-1] == a[i+string_sizes[max_string_index]-1]) {
                a_starting_index = i;
                a_ending_index = i+string_sizes[max_string_index]-1;
                break;
          }
        }

        for (int i = 0; i < bL; i++) {
          if (corresponding_strings[max_string_index][0] == b[i] && 
              corresponding_strings[max_string_index][string_sizes[max_string_index]-1] == b[i+string_sizes[max_string_index]-1]) {
                b_starting_index = i;
                b_ending_index = i+string_sizes[max_string_index]-1;
                break;
          }
        }
    } 

    if (corresponding_strings[max_string_index].size())
      no_of_operations = (a_starting_index + aL - a_ending_index + b_starting_index + bL - b_ending_index - 2);
    else
      no_of_operations = a.length() + b.length();

    cout << no_of_operations << "\n";




  }
  return 0;
}