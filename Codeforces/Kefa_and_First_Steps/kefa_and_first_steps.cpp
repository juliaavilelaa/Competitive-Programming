#include <iostream>
using namespace std;

int main() {
    int n, a, cont = 0, maiorSequencia = 0, numAnterior = -1;
    
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a;

        if (a >= numAnterior) {
            cont++;
            if (cont > maiorSequencia) {
                maiorSequencia = cont;
            }
        } else {
            cont = 1;
        }

        numAnterior = a;
    }

    cout << maiorSequencia << endl;

    return 0;
}