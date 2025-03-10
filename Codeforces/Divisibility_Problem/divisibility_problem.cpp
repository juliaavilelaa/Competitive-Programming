#include <iostream>
using namespace std;

int moves(int a, int b) {
    int count = 0;

    // if (a < b) {
    //     count = b - a;
    //     a = b;
    // }

    if (a % b != 0) {
        count = b - (a % b);
    }

    return count;
}

int main() {
    int t, a, b;

    cin >> t;

    while (t--) {
        cin >> a >> b;
        cout << moves(a, b) << endl;
    }

    return 0;
}