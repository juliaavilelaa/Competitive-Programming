#include <iostream>
using namespace std;

int main() {
    int t, n;

    cin >> t;

    for (int i = 0; i < t; i++) {
        int height = 0;
        int coins = 1;
        cin >> n;

        while (coins <= n) {
            height++;
            n = n - coins;
            coins++;
        }

        cout << height << endl;
    }

    return 0;
}