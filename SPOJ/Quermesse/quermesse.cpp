#include <iostream>
using namespace std;

int main() {
    int n, p, t = 1;

    while (cin >> n && n != 0) {
        for (int i = 1; i <= n; i++) {
            cin >> p;
            if (p == i) {
                cout << "Teste " << t << "\n" << p << "\n\n";
                t++;
            }
        }
    }

    return 0;
}