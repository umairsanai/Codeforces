#include <bits/stdc++.h>
using namespace std;

string add(string a, string b)
{
    string result;
    int carry_over = 0;
    if (a.length() < b.length())
    {
        string temp = a;
        a = b;
        b = temp;
    }
    b.insert(0, (a.length() - b.length()), '0');
    for (int i = a.length() - 1; i >= 0; i--)
    {
        int sum = (carry_over + a[i] + b[i] - 2 * '0');
        result += (sum % 10) + '0';
        carry_over = sum / 10;
    }
    reverse(result.begin(), result.end());
    return result;
}


int main() {
  system("cls");
  
  return 0;
}