#include <bits/stdc++.h>
using namespace std;

typedef uint64_t num;

bool isEqualToPalindrome(string original, string palindrome) {
    int n = original.length();
    for (int i = 0; i < n; i++) {
        if (original[i] != palindrome[n-i-1]) {
            return false;
        }
    }
    return true;
}

/*
    Code is correct. Time limit is exceeding 2 sec
*/



int main() {
    cin.tie(0)->sync_with_stdio(0);

    system("cls");

    int t; cin >> t;

    while (t--) {

        int n, length, operations = 0; string a; 
        cin >> n >> a;
        length = a.length();

        for (int i = 0; i < n-1; i++) {
            bool canbeRegular = false;
            int start = i, end = i, opened = 0, closed = 0;
            string simple, palindrome;
            simple += a[start];
            palindrome += a[start];

            if (a[i]=='(') {
                canbeRegular = true;
            }

            while (end < n) {
                if (a[end] == '(')
                    opened++;
                else
                    closed++;

                if (canbeRegular) {
                    if (opened==closed) {
                        length -= (end-start+1);
                        i = end;
                        operations++;
                        break;
                    }
                }
                if (palindrome.length() >= 2 && isEqualToPalindrome(simple, palindrome)) {
                    length -= palindrome.length();
                    i = end;
                    operations++;
                    break;
                } else {
                    if (end < n-1) {
                        end++;
                    } else {
                        i = end;
                        break;
                    }
                    palindrome += a[end];
                    simple += a[end];
                }
            }            
        }       
        cout << operations << " " << length << "\n";                
    }
    return 0;
}