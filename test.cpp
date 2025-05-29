#include <bits/stdc++.h>
using namespace std;

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
};


int main() {
    cin.tie(0)->sync_with_stdio(0);
    system("cls");

    

    
    return 0;
}