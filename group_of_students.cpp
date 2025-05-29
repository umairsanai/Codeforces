#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, x, y, threshold = 0;
    cin >> n;
    vector<int> a(n), sums(n, 0);

    for (int i = 0; i < n; i++)
        cin >> a[i];
    cin >> x >> y;

    sums[0] = a[0];
    for (int i = 1; i < n; i++)
        sums[i] = a[i] + sums[i-1];

    for (int i = 0; (i < n && !threshold); i++) {
        if ((sums[i] >= x && y >= sums[i]) && ((sums[n-1]-sums[i]) >= x && y >= (sums[n-1]-sums[i])))
            threshold = i+2;
    }
    cout << threshold << "\n";
    return 0;
}