#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    system("cls");

    int t, n, m; cin >> t;
    
    while (t--) {        
        int ones = 0, operations = 0;
        cin >> n >> m;
        vector<vector<char>> a(n, vector<char> (m));
        bool zeroes = false, twoZeroes = false;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
                if (a[i][j] == '0')
                    zeroes = true;
                else
                    ones++;

            }

        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i][j]=='0') {
                    if ((j < m-1 && a[i][j+1] == '0') || i < n-1 && a[i+1][j] == '0') {
                        twoZeroes = true;
                        break;
                    }
                } else {
                    if ((i < n-1 && j < m-1 && a[i][j+1] == a[i+1][j] && a[i+1][j] == '0')
                    || (i < n-1 && j > 0 && a[i][j-1] == a[i+1][j] && a[i+1][j] == '0')
                    || (i > 0 && j < m-1 && a[i][j+1] == a[i-1][j] && a[i-1][j] == '0') 
                    || (i > 0 && j > 0 && a[i][j-1] == a[i-1][j] && a[i-1][j] == '0')) {
                        twoZeroes = true;
                        break;
                    }
                }
            }
        }
        if (twoZeroes) {
            operations = ones;
        } else if (zeroes) {
            operations = ones;
            if (operations >= 2)
                operations--;
        } else {
            if (ones > 3) {
                operations = ones-2;
            } else {
                operations = 1;
            }
        }
        cout << operations << "\n";
    }    
    return 0;
}