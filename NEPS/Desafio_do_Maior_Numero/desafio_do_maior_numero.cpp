#include <iostream>
using namespace std;

int main() {
    int maiorNumero = -1, n;

    while (cin >> n) {
        if (n == 0) {
            break;
        } else {
            if (n > maiorNumero) {
            maiorNumero = n;
            }
        }
    }

    cout << maiorNumero;

    return 0;
}