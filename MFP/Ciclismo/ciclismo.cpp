#include <iostream>
using namespace std;

#define endl '\n'

int main() {
    int a, b; cin >> a >> b;

    int s = a - b;

    for (int i = s; i <= a; i++) {
        if (a % i == 0) {
            cout << i << endl;
            return 0;
        }
    }

    return 0;
}