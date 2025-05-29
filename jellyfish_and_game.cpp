#include <bits/stdc++.h>
using namespace std;

typedef uint64_t num;

int max(vector<int> a) {
    int max = 0;
    for (int i = 1; i < a.size(); i++) {
        if (a[i] > a[max])
            max = i;
    }
    return max;
}
int min(vector<int> a) {
    int min = 0;
    for (int i = 1; i < a.size(); i++) {
        if (a[i] < a[min])
            min = i;
    }
    return min;
}
num sum(vector<int> a) {
    num sum = 0;
    for (int i = 0; i < a.size(); i++)
        sum += a[i];
    return sum;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t, n, m, k; cin >> t;

    while (t--) {
        cin >> n >> m >> k;
        vector<int> a(n), b(m);
        num ans = 0, max_sum  = 0, min_sum = 0;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];
        {
            int min_a = min(a), max_b = max(b);
            if (a[min_a] < b[max_b]) {
                a[min_a] ^= b[max_b] ^= a[min_a] ^= b[max_b];
            }
            max_sum = sum(a);            
        }        
        
        if (k >= 2) {
            int max_a = max(a), min_b = min(b);
            if (a[max_a] > b[min_b]) {
                a[max_a] ^= b[min_b] ^= a[max_a] ^= b[min_b];
            }
            min_sum = sum(a);
            int min_a = min(a), max_b = max(b);
            if (a[min_a] < b[max_b]) {
                a[min_a] ^= b[max_b] ^= a[min_a] ^= b[max_b];
            }
            max_sum = sum(a);
        }
        cout << (k%2 ? max_sum : min_sum) << "\n";
    }
    return 0;
}