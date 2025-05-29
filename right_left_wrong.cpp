#include <bits/stdc++.h>
using namespace std;

typedef uint64_t num;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    system("cls");

    int t; cin >> t;

    while (t--) {

        num n, score = 0; cin >> n;
        vector<num> a(n);
        vector<num> sums(n, 0);

        string s;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cin >> s;
        int left = 0, right = n-1;
        sums[0] = a[0];
        for (int i = 1; i < n; i++) {
            sums[i] = a[i] + sums[i-1];
        }

        while (left < right) {
            for (; left < n && s[left] != 'L'; left++);
            for (; right >= 0 && s[right] != 'R'; right--);
            if (left < right) {
                score += (sums[right]-(left > 0 ? sums[left-1] : 0));
                left++;
                right--;
            }
        }
        cout << score << "\n";

    }
    
    return 0;
}