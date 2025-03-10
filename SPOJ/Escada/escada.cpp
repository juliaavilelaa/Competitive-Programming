#include <iostream>
using namespace std;

int main() {
    int k, n[100], tempo = 0;

    cin >> k;

    for (int i = 0; i < k; i++) {
        cin >> n[i];
    }

    for (int i = 0; i < k; i++) {
        int intervalo = n[i+1] - n[i];

        if (n[i] == n[k-1]) {
            tempo += 10;
        } else if (intervalo == 10 || intervalo > 10) {
            tempo += 10;
        } else if (intervalo < 10) {
            tempo += n[i+1] - n[i];
        }
    }

    cout << tempo << endl;

    return 0;
}