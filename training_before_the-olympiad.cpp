#include <bits/stdc++.h>
using namespace std;

typedef uint64_t num;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t; cin >> t;

        while (t--) {

        int n; cin >> n;
        vector<num> a(n), sums(n);
        vector<vector<num>> parity(n, vector<num> (2, 0));
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (i == 0) {
                if (a[i]%2) {
                    parity[i][1]++;
                } else {
                    parity[i][0]++;
                }
            } else {
                if (a[i]%2) {
                    parity[i][1] = parity[i-1][1] + 1;
                    parity[i][0] = parity[i-1][0];
                } else {
                    parity[i][0] = parity[i-1][0] + 1;
                    parity[i][1] = parity[i-1][1];
                }
            }
        }
        sums[0] = a[0];
        for (int i = 1; i < n; i++)
            sums[i] = a[i] + sums[i-1];
        
        for (int k = 0; k < n; k++) {
            num evens = parity[k][0], odds = parity[k][1], sub = 0;
            if (evens + odds > 1) {
                if (odds == 1) {
                    sub++;
                } else {
                    sub = (odds%3 == 2 ? (odds-(odds/3+1)*2) : (odds-(odds/3)*2));
                }
            }
            cout << (sums[k] - sub) << " ";
        }
        cout << "\n";        
    }
    return 0;
}