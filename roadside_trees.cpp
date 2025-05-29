#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    int moves = (2*n-1) + a[0];
    for (int i = 1; i < n; i++) {        
        moves += abs(a[i-1]-a[i]);
    }
    cout << moves << "\n";
    return 0;
}