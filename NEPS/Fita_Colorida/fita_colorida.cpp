#include <iostream>
using namespace std;

void vercostas(int fita[], int pos) {
    int cor = 1;
    if (pos != 0) {
        pos--;
        while ((fita[pos] > cor || fita[pos] == -1) && pos > -1) {
            if (fita[pos] == 0) {
                return;
            }
            fita[pos] = cor;
            pos--;
            if (cor < 9) {
                cor++;
            }
        }
    }
}

int main() {
    int tam, n, cor = 0, primeirozero = 1;

    cin >> tam;
    int fita[tam];

    for (int i = 0; i < tam; i++) {
        cin >> n;
        
        if (cor < 9) {
            cor++;
        }
        if (n == 0) {
            primeirozero = 0;
            vercostas(fita, i);
            cor = 0;
            fita[i] = 0;
        } else {
            if (primeirozero == 0) {
                fita[i] = cor;
            } else {
                fita[i] = -1;
            }
        }
    }

    for (int j = 0; j < tam; j++) {
        cout << fita[j] << " ";
    }
    cout << endl;

    return 0;
}

/*
int main() {
    int sz, n, i, j, color = -1;
    bool primeirozero = false;

    vector<int> tape;

    cin >> sz;

    for (i = 0; i < sz; i++) {
        cin >> n;

        
        if (n == 0) {
            primeirozero = true;
            color = 0;
        } else if (color > 9) {
            color = 9;
        } else if (primeirozero) {
            color++;
        } else {
            color = -1;
        }

    }

    for (i = sz-1; i > -1; i--) {
        if (tape[i] == 0) {
            color = 1;
            for (j = i-1; tape[j] != 0 && j > -1; j--) {
                if (color > 9) {
                    tape[j] = 9;
                } else {
                    tape[j] = color;
                }
                if (tape[j] == tape[j-1]) {
                    break;
                }
                if (tape[j] == tape[j-2]) {
                    break;
                }
                color++;
            }
        }
    }

    for (i = 0; i < sz; i++) {
        cout << tape[i] << " ";
    }
    cout << endl;

    return 0;
}
*/