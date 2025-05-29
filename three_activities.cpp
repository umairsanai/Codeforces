#include <bits/stdc++.h>
using namespace std;

typedef uint64_t num;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t, n; cin >> t;

    while (t--) {
        cin >> n;
        vector<num> a(n), b(n), c(n);
        vector<num> indexes_a, indexes_b, indexes_c;
        num ans = 0;
        {
            num a1 = 0, a2 = 1, a3 = 2, b1 = 0, b2 = 1, b3 = 2, c1 = 0, c2 = 1, c3 = 2;
            for (int i = 0; i < n; i++) {
                cin >> a[i];
                if (a[a1] < a[i]) {
                    a1 = i;
                }
            }
            if (a1 == a2) {
                a2 = 0;
            }
            for (int i = 0; i < n; i++) {
                if (a[a2] < a[i] && i != a1) {
                    a2 = i;
                } 
            }

            if (a1 == a3) {
                a3 = !a2;
            } else if (a2 == a3) {
                a3 = !a1;
            }

            for (int i = 0; i < n; i++) {
                if (a[a3] < a[i] && i != a1 && i != a2) {
                    a3 = i;
                } 
            }
            indexes_a.insert(indexes_a.begin(), {a1,a2,a3});
              
            for (int i = 0; i < n; i++) {
                cin >> b[i];
                if (b[b1] < b[i]) {
                    b1 = i;
                }
            }
            if (b1 == b2) {
                b2 = 0;
            }

            for (int i = 0; i < n; i++) {
                if (b[b2] < b[i] && i != b1) {
                    b2 = i;
                } 
            }
            if (b1 == b3) {
                b3 = !b2;
            } else if (b2 == b3) {
                b3 = !b1;
            }
            for (int i = 0; i < n; i++) {
                if (b[b3] < b[i] && i != b1 && i != b2) {
                    b3 = i;
                } 
            }
            indexes_b.insert(indexes_b.begin(), {b1,b2,b3});

            for (int i = 0; i < n; i++) {
                cin >> c[i];
                if (c[c1] < c[i]) {
                    c1 = i;
                }
            }
            if (c1 == c2) {
                c2 = 0;
            }
            for (int i = 0; i < n; i++) {
                if (c[c2] < c[i] && i != c1) {
                    c2 = i;
                } 
            }
            if (c1 == c3) {
                c3 = !c2;
            } else if (c2 == c3) {
                c3 = !c1;
            }
            for (int i = 0; i < n; i++) {
                if (c[c3] < c[i] && i != c1 && i != c2) {
                    c3 = i;
                } 
            }
            indexes_c.insert(indexes_c.begin(), {c1,c2,c3});
        }
        
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                for (int k = 0; k < 3; k++) {
                    if (indexes_a[i] != indexes_b[j] && indexes_a[i] != indexes_c[k] && indexes_b[j] != indexes_c[k]) {
                        ans = (ans > (a[indexes_a[i]] + b[indexes_b[j]] + c[indexes_c[k]]) ? ans : (a[indexes_a[i]] + b[indexes_b[j]] + c[indexes_c[k]]));
                    }
                }
            }
        }

        cout << ans << "\n";
    }
    return 0;
}