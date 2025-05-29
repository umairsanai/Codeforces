#include <iostream>
using namespace std;

int main()
{
  int test_cases;
  cin >> test_cases;

  string inputs[test_cases];
  for (int i = 0; i < test_cases; i++)
    cin >> inputs[i];

  for (int i = 0; i < test_cases; i++)
  {
    string new_password;
    int n = inputs[i].length();
    bool firstPair = true, pairMatched = false;
    for (int j = 1; j <= n; j++)
    {
      new_password += inputs[i][j - 1];
      if (inputs[i][j - 1] == inputs[i][j] && firstPair)
      {
        new_password += (inputs[i][j - 1] == 'a' ? 'b' : 'a');
        pairMatched = true;
        firstPair = false;
      }
    }
    if (!pairMatched)
      new_password += (new_password[n-1] == 'a' ? 'b' : 'a'); 
    cout << new_password << endl;
  }
  return 0;
}