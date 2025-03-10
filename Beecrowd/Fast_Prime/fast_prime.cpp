#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n == 1 || n == 0) {
        return true;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n, x;

    cin >> n;

    while (n--) {
        cin >> x;
        if (isPrime(x)) {
            cout << "Prime" << endl;
        } else {
            cout << "Not Prime" << endl;
        }
    }

    return 0;
}