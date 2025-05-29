#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while (t--) {
      int n;
      cin >> n;
      int height[n], width[n], max_width, max_height;
      for (int i = 0; i < n; i++)
        cin >> height[i] >> width[i];

      max_height = height[0];
      max_width = width[0];

      for (int i = 1; i < n; i++) {
          if (max_height < height[i])
            max_height = height[i];
          if (max_width < width[i])
            max_width = width[i];
      }
      
      cout << 2*(max_height + max_width) << "\n";
    }
    return 0;
}