#include <bits/stdc++.h>
using namespace std;

int main() {
  system("cls");

  string b;
  int n, captain_index;
  cin >> n;
  vector<string> a(n); vector<int> rats; vector<int> women_n_children; vector<int> men;

  for (int i = 0; i < n; i++) {
    cin >> a[i] >> b;
    if (b == "woman" || b == "child")
    women_n_children.push_back(i);
    else if (b == "man")
    men.push_back(i);
    else if (b == "rat")
    rats.push_back(i);
    else if (b == "captain")
    captain_index = i;
  }

  for (int i = 0, x = rats.size(); i < x; i++)
    cout << a[rats[i]] << "\n";
  for (int i = 0, x = women_n_children.size() ; i < x; i++)
    cout << a[women_n_children[i]] << "\n";
  for (int i = 0, x = men.size(); i < x; i++)
    cout << a[men[i]] << "\n";
  cout << a[captain_index] << "\n";  
  return 0;
}