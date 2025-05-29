#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int c1, c2, c3, c4, n, m, sum = 0, total = 0; cin >> c1 >> c2 >> c3 >> c4 >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    for (int i = 0; i < n; i++) {
        sum += min(a[i]*c1, c2);
    }
    total += min(sum, c3);
    sum = 0;
    for (int i = 0; i < m; i++) {
        sum += min(b[i]*c1, c2);
    }
    total += min(sum, c3);
    total = min(total, c4);
    cout << total << "\n";
    return 0;
}