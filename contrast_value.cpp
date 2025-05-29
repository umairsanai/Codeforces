#include <bits/stdc++.h>
using namespace std;

typedef int64_t num;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t, n; cin >> t;

    while (t--) {
        cin >> n;
        vector<num> a;
        num contrast = 0, ans = 1, x;
        for (int i = 0; i < n; i++) {
            cin >> x;
            if (i > 0) {
                if (a.back() != x)
                    a.push_back(x);
            } else
                a.push_back(x);
        }

        for (int i = 1; i < a.size(); i++)
            contrast += abs(a[i]-a[i-1]);

        if (contrast) {
            ans = n = a.size();
            for (int i = 1; i < n-1; i++) {
                if ((a[i-1] > a[i] && a[i] > a[i+1]) ||
                    (a[i-1] < a[i] && a[i] < a[i+1])) {
                        ans--;
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}