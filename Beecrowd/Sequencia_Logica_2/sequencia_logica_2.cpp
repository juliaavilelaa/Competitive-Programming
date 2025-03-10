#include <iostream>
using namespace std;

int main() {
    int x, y, n = 1;

    cin >> x >> y;

    while (n < y) {
        for (int i = 0; i < x; i++) {
            cout << n;
            if (i < x - 1) {
                cout << " ";
            }
            n++;
        }
        cout << endl;
    }

    return 0;
}