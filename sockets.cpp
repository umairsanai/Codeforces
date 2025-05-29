#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m, k, sum = 0, ans = -1; cin >> n >> m >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) 
        cin >> a[i];
    
    sort(a.rbegin(), a.rend());
    m -= (k-1);

    if (m > 1) {
        for (int i = 0; i < n; i++) {
            sum += (a[i]);
            if (sum >= m) {
                ans = i+1;
                break;
            }
            sum--;
        }
    } else {
        ans = 0;
    }
    cout << ans << "\n";
    return 0;
}