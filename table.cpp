#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m; cin >> n >> m;
    bool edges_found = false;
    vector<vector<int>> a(n, vector<int> (m, 0));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            if ((j == 0 || j == m-1 || i == 0 || i == n-1) && a[i][j] == 1)
                edges_found = true;
        }
    }
    cout << (edges_found ? 2 : 4) << "\n";
    return 0;
}