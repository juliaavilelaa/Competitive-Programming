#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, cont = 0;
    char respostas[80], gabarito[80];

    cin >> n;

    for (int r = 0; r < n; r++) {
        cin >> respostas[r];
    }

    for (int g = 0; g < n; g++) {
        cin >> gabarito[g];
    }

    for (int i = 0; i < n; i++) {
        if (respostas[i] == gabarito[i]) {
            cont++;
        }
    }

    cout << cont << endl;

    return 0;
}