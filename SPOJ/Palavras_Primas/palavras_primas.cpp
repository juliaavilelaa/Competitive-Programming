#include <iostream>
#include <math.h>
using namespace std;

bool ehPrimo (int n) {
    if (n == 0 || n == 1) {
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
    string palavra;

    while (cin >> palavra) {
        int soma = 0;
        char *letra = &palavra[0];

        for (int i = 0; i < palavra.length(); i++) {
            int letraAscii = (int)letra[i];
            if (letraAscii >= 97) {
                soma += letraAscii-96;
            } else if (letraAscii <= 90) {
                soma += letraAscii-38;
            }
        }
        letra = NULL;
        delete letra;

        if (ehPrimo(soma)) {
            cout << "It is a prime word." << endl;
        } else {
            cout << "It is not a prime word." << endl;
        }
    }

    return 0;
}