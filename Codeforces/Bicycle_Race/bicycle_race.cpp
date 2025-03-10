#include <iostream>
using namespace std;

int main() {
    int n, x_anterior, y_anterior, x, y, curvas = 0;
    char direcao = 'O';

    cin >> n;

    cin >> x_anterior >> y_anterior;

    for (int i = 0; i < n; i++) {
        cin >> x >> y;

        if (direcao == 'O' && y_anterior < y) {
            direcao = 'N';
        }
        if (direcao == 'N' && x_anterior < x) {
            direcao = 'L';
        }
        if (direcao == 'L' && y_anterior < y) {
            direcao = 'N';
            curvas++;
        }
        if (direcao == 'N' && x < x_anterior) {
            direcao = 'O';
            curvas++;
        }
        if (direcao == 'L' && y < y_anterior) {
            direcao = 'S';
        }
        if (direcao == 'S' && x < x_anterior) {
            direcao = 'O';
        }
        if (direcao == 'O' && y < y_anterior) {
            direcao = 'S';
            curvas++;
        }
        if (direcao == 'O' && y_anterior < y) {
            direcao = 'N';
        }
        if (direcao == 'S' && x_anterior < x) {
            direcao = 'L';
            curvas++;
        }

        x_anterior = x;
        y_anterior = y;
    }

    cout << curvas << endl;

    return 0;
}