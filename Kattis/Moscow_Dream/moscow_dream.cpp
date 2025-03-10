#include <iostream>
using namespace std;

int main() {
    int easy, med, hard, q;

    cin >> easy >> med >> hard >> q;
    if (easy > 0 && med > 0 && hard > 0) {
        if (q >= 3 && easy + med + hard >= q) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    } else {
        cout << "NO" << endl;
    }

    return 0;
}