#include <bits/stdc++.h>
using namespace std;

string operator^(string a, string b) {
    string ans = "";
    if (a.length() > b.length()) {
        b.insert(0, a.length()-b.length(), '0');
    } else {
        a.insert(0, b.length()-a.length(), '0');
    }
    for (int i = 0; i < a.length(); i++) {
        if (a[i] != b[i]) {
            ans += '1';
        } else {
            ans += '0';
        }
    }
    return ans;
}
bool operator>(string a, string b) {
    if (a.length() > b.length()) {
        b.insert(0, a.length()-b.length(), '0');
    } else {
        a.insert(0, b.length()-a.length(), '0');
    }
    for (int i = 0; i < a.length(); i++) {
        if (a[i] > b[i]) {
            return true;
        }
        if (b[i] > a[i]) {
            return false;
        }
    }
    return false;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t; cin >> t;

    while (t--) {
        string a;
        cin >> a;
        vector<int> zeros, ones;
        vector<string> xors;
        int n = a.length(), l = 1, r = 1;

        if (n > 1) {
            for (int i = 0; i < n; i++) {
                if (a[i] == '1') {
                    ones.push_back(i);
                } else {
                    zeros.push_back(i);
                }
            }
            if (zeros.size() && ones.size()) {
                for (int i = 0; i < zeros.size(); i++) {
                    string max_xor = "0";
                    if (zeros[i] > ones[0]) {
                        for (int j = 0; j < ones.size() && ones[j] < zeros[i]; j++) {
                            string temp = a.substr(ones[j], n-zeros[i]);
                            string z = temp^a;
                            if (z > max_xor) {
                                max_xor = z;
                                l = ones[j]+1;
                                r = (ones[j]+n-zeros[i]);
                            }
                        }
                        break;
                    }
                }
            }
        }        
        cout << 1 << " " << a.length() << " " << l << " " << r << "\n";
    }
    return 0;
}