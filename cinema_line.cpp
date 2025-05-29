#include <bits/stdc++.h>
using namespace std;

typedef uint64_t num;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    system("cls");

    int n, _25s = 0, _50s = 0; cin >> n;
    string ans = "YES\n";
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        if (a[i] == 25) 
        {
            _25s++;
        } 
        else if (a[i] == 50) 
        {
            _50s++;
            if (_25s > 0) {
                _25s--;
            } else {
                ans = "NO\n";
                break;
            }
        }
        else 
        {
            if (_25s > 0 && _50s > 0) {
                _25s--;
                _50s--;
            } else if (_25s >= 3) {
                _25s -= 3;
            } else {
                ans = "NO\n";
                break;
            }
        }

    }
    cout << ans;
    return 0;
}