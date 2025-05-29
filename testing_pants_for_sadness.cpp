#include <bits/stdc++.h>
using namespace std;

typedef uint64_t num;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    num n, ans = 0; cin >> n;
    vector<num> a(n);
    for (int i = 0; i < n; i++) 
        cin >> a[i];
    
    for (num i = 0; i < n-1; i++)
        ans += (i+1)*(a[i]-1);
    ans += (n)*(a[n-1]);
    cout << ans << "\n";
    return 0;
}