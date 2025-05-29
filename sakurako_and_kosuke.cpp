#include <iostream>
using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;

    string winners[test_cases], players = "sk";
    char player;

    for (int m = 0; m < test_cases; m++) {
        int x = 0, n;
        cin >> n;
        for (int i = 0; abs(x) <= n; i++) {
          player = players[i%2];
          x += (player == 's' ? -(2*(i+1) - 1) : 2*(i+1) - 1);
        }
        winners[m] = (player == 's' ? "Sakurako" : "Kosuke");
    }
    for (int i = 0; i < test_cases; i++)
        cout << winners[i] << endl;
    return 0;
}