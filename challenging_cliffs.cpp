#include <bits/stdc++.h>
using namespace std;

typedef uint64_t num;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    system("cls");

    int t; cin >> t;

    while (t--) {

        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int min_diff = abs(a[n-1]-a[0]), min_diff_left = 0;

        for (int i = 1; i < n; i++) {
            if (abs(a[i-1] - a[i]) < min_diff) {
                min_diff_left = i-1;
                min_diff = abs(a[i-1] - a[i]);
            }
        }

        cout << a[min_diff_left] << " ";
        for (int i = min_diff_left+2; i < n; i++) {
            cout << a[i] << " ";
        }
        for (int i = 0; i < min_diff_left; i++) {
            cout << a[i] << " ";
        }
        cout << a[min_diff_left+1] << "\n";

    }
    return 0;
}