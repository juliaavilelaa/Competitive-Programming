#include <iostream>
#include <math.h>
using namespace std;

bool ehPrimo(long long int n) {
    if (n == 0 || n == 1) {
        return true;
    } 
    for (int i = 2; i < sqrt(n); i++) {
        if (n%i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    long long int n;

    cin >> n;

    if (ehPrimo(n) == false) {
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }
    
    return 0;
}
