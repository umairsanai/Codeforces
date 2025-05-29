#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t, n, m, k; cin >> t;

    while (t--) {

        string a; 
        int pos = 0;
        cin >> n >> m >> k >> a;
        a = 'L' + a;
        a += 'L';
        n += 2;
        bool possible = true;

        while (pos < n) {
            bool log_found = false;
            bool landed = false;
            if (a[pos] == 'L') {
                for (int i = pos+m; i > pos; i--) {
                    if (a[i]=='L') {
                        pos = i;
                        log_found = true;
                        landed = true;
                        break;
                    }
                }
                if (!log_found) {
                    for (int i = pos+m; i > pos; i--) {
                        if (a[i] != 'C') {
                            pos = i;
                            landed = true;
                            break;
                        }
                    }
                }
            } else if (a[pos] == 'W') {
                for (int i = pos+1; i <= (pos+k); i++) {
                    if (a[i] == 'L' && k >= i-pos) {
                        log_found = true;
                        k -= (i-pos);
                        pos = i;
                        landed = true;
                        break;
                    }
                    if (a[i] == 'C') {
                        possible = false;
                        break;
                    }
                }
                if (possible && !log_found) {
                    for (int i = (pos+1); i <= pos+k; i++) {
                        if (a[i] == 'W' && k >= (i-pos)) {
                            k -= (i-pos);
                            pos = i;
                            landed = true;
                            break;
                        }
                    }
                }
            }
            if (pos == n) {
                break;
            }
            if (!landed) {
                possible = false;
                break;
            }
        }
        cout << (possible ? "YES" : "NO") << "\n";

    }
    return 0;
}