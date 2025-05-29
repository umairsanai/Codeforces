#include <bits/stdc++.h>
using namespace std;

int main() {
  system("cls");
  int t; cin >> t;

  while (t--) {
    vector<string> corresponding_strings(1);
    vector <int> string_sizes(1,0);
    string a, b, c = "NO", output;
    int x = 0, aL, bL, max_string_index = 0;
    bool matched = false;

    cin >> a >> b;
    
    if (a.length() < b.length()) {
      string temp = a;
      a = b;
      b = temp;
    }

    aL = a.length(); 
    bL = b.length();

    for (int i = 0; i < bL; i++) {
      matched = false;
      for (int j = 0; (j < aL); j++) {
        if (b[i] == a[j]) {
          int l = i, m = j;
          while (l < bL && m < aL && b[l] == a[m]) {
            corresponding_strings[x].push_back(b[l]);
            string_sizes[x]++;
            matched = true;
            l++; m++;
          }
          if (matched) {
            corresponding_strings.push_back("");
            string_sizes.push_back(0);
            matched = false;
            x++; 
          }
        }
      }
    }

    for (int i = 1; i <= x; i++) {
      if (string_sizes[max_string_index] < string_sizes[i])
        max_string_index = i;
    }


    if (string_sizes[max_string_index] == 0) {
      c = "NO";
    }
    else if (string_sizes[max_string_index] == 1) 
    {
      if (corresponding_strings[max_string_index][0] == a[0] && a[0] == b[0]) 
      {
        c = "YES";
        output += corresponding_strings[max_string_index][0];
        output += '*';
      } 
      else if (corresponding_strings[max_string_index][0] == a[aL-1] && a[aL-1] == b[bL-1])
      {
        c = "YES";
        output += '*';
        output += corresponding_strings[max_string_index][0];
      } else 
      {
        c = "NO";
      }
    } 
    else 
    {
      c = "YES";
      output += '*';
      output += corresponding_strings[max_string_index];
      output += '*';
    }

    cout << c << "\n"; 
    if (c == "YES")
      cout << output << "\n";
  }
  return 0;
}