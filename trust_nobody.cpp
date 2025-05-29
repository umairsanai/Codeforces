#include <bits/stdc++.h>
using namespace std;

typedef uint64_t num;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    system("cls");

    int t; cin >> t;

    while (t--) {

        int n, ans = -1; cin >> n;
        vector<int> a(n);
        vector<vector<int>> nums(n+1, vector<int> (0));
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            nums[a[i]].push_back(a[i]);
        }
        sort(a.begin(), a.end());
        
        for (int i = 0; i < n; i++) {
            int start = i, end = i;
            while (end < n-1 && a[start]==a[end]) {
                if (a[end+1] == a[start])
                    end++;
                else
                    break;
            }
            if (a[end] == (n-end-1)) {
                ans = (n-end-1);
                break;
            }
            if (a[end] > (n-end-1)) {
                if (start > 0) {
                    if (a[start-1] <= n-start && n-start < a[start]) {
                        ans = (n-start);
                        break;
                    }
                }
            }
            i = end;
        }
        cout << ans << "\n";        
    }
    return 0;
}