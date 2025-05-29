#include <bits/stdc++.h>
using namespace std;

struct value {
    int weight, cordinate, index;
};
struct points{
    int cordinate, index;
};

int main() {
    cin.tie(0)->sync_with_stdio(0);

    system("cls");

    int t; cin >> t;

    while (t--) {

        int n, m, weight = 0; cin >> n >> m;
        vector<value> a(m);
        vector<points> x(2*n);
        for (int i = 0; i < m; i++) {
            cin >> a[i].cordinate >> a[i].weight;
            a[i].index = i;
        }
        sort(a.begin(), a.end(), [](value& a, value& b) {return a.weight < b.weight;});

        for (int i = 0; i < 2*n; i+=2) {
            weight += (a[i].weight + a[i+1].weight);
            x[i].cordinate = a[i].cordinate;
            x[i].index = (a[i].index+1);
            x[i+1].cordinate = a[i+1].cordinate;
            x[i+1].index = (a[i+1].index+1);
        }

        sort(x.begin(), x.end(), [](points& a, points& b) {return a.cordinate < b.cordinate;});
        cout << weight << "\n";
        for (int i = 0; i < x.size()/2; i++) {
            cout << x[i].index << " " << x[x.size()-i-1].index << "\n";
        }
    }
    return 0;
}