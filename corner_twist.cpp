#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t, n, m; cin >> t;

    while (t--) {

        cin >> n >> m;
        vector<vector<int>> a(n, vector<int> (m, 0)), b(n, vector<int> (m, 0));

        for (int i = 0; i < n; i++) {
            string temp;
            cin >> temp;
            for (int j = 0; j < m; j++) {
                a[i][j] = temp[j]-'0';
            }
        }
        for (int i = 0; i < n; i++) {
            string temp;
            cin >> temp;
            for (int j = 0; j < m; j++) {
                b[i][j] = temp[j]-'0';
            }
        }

        for (int i = 0; i < n-1; i++) {
            for (int j = 0; j < m-1; j++) {
                int row = i+1, col = j+1;
                while (row < n && col < m && a[row][col] == b[row][col]) {
                    if (col == m-1) {
                        if (row == n-1) {
                            break;
                        }
                        col = j+1;
                        row++;
                    } else {
                        col++;
                    }
                }
                while (a[i][j] != b[i][j]) {
                    a[i][j] = (a[i][j]+1)%3;
                    a[i][col] = (a[i][col]+2)%3;
                    a[row][j] = (a[row][j]+2)%3;
                    a[row][col] = (a[row][col]+1)%3;
                }
            }
        }
        bool possible = true;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i][j] != b[i][j]) {
                    possible = false;
                    break;
                }
            }
            if (!possible)
                break;
        }
        cout << (possible ? "YES" : "NO") << "\n";
    }
    return 0;
}