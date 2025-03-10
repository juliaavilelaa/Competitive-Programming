#include <iostream>
using namespace std;

int main() {
    int n;

    while (cin >> n && n != 0) {
        int quadrados = 0;

        int quad = n;
        for (int i = 0; i < n; i++) {
            quadrados += quad*quad;
            quad--;
        }
        cout << quadrados << endl;
    }

    return 0;
}