#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> beats;
    int k;
    char panel;

    cin >> k;

    for (int i = 0; i < 16; i++) {
        cin >> panel;
        if (panel != '.') {
            int numero = panel - '0';
            beats.insert(numero);
        }
    }

    bool press = true;
    for (auto i : beats) {
        if ((2*k) < beats.count(i)) {
            press = false;
            break;
        }
    }

    if (press) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}