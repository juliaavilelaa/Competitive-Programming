#include <iostream>
using namespace std;

int main() {
    int H, P, F, D;
    cin >> H >> P >> F >> D;

    while (F != H && F != P) {
        F = (F + D + 16) % 16;
    }

    if (F == H) {
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }

    return 0;
}

/*
int main() {
    int helicoptero, policia, fugitivo, direcao;
    cin >> helicoptero >> policia >> fugitivo >> direcao;

    int posic = fugitivo;

    for (int i = 0; i < 16; i++) {
        if (direcao == 1) {
            posic++;
            if (posic == 16) {
                posic = 0;
            }
        } else {
            posic--;
            if (posic == -1) {
                posic = 15;
            }
        }

        if (posic == helicoptero) {
            cout << 'S';
            break;
        }
        if (posic == policia) {
            cout << 'N';
            break;
        }
    }

    return 0;
}
*/