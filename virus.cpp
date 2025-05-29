#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    system("cls");

    int t; cin >> t;

    while (t--) {
        int n, m, ans = 0;
        cin >> n >> m;
        vector<int> a(m), differences;

        for (int i = 0; i < m; i++)
            cin >> a[i];

        sort(a.begin(), a.end());

        for (int i = 0; i < m; i++) {
            int diff = 0;
            if (i == 0) {
                diff += (a[i]-1);
                diff += (n-a[m-1]);
            } else {
                diff += (a[i]-a[i-1]-1);
            }
            differences.push_back(diff);
        }
        sort(differences.rbegin(), differences.rend());

        for (int i = 0; i < differences.size(); i++) {
            if (differences[i]==(4*(i+1)-3))
                ans += 1;
            else
                ans += max(differences[i]-(4*(i+1)-3), 0);
        }        
        cout << (n-ans) << "\n";
    }    
    return 0;
}