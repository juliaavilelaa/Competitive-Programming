#include <iostream>
#include <cmath>
using namespace std;

bool primo(int n) {
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
    int n;

    cin >> n;

    if (primo(n)) {
        cout << "sim" << endl;
    } else {
        cout << "nao" << endl;
    }

    return 0;
}