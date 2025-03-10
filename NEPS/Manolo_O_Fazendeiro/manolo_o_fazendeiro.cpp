#include <iostream>
using namespace std;

int main() {
    int n, q, li, ci, lf, cf;
    
    cin >> n;
    int** p = new int*[n];

    for (int i = 0; i < n; i++) {
        p[i] = new int[n];
        for (int j = 0; j < n; j++) {
            cin >> p[i][j];
        }
    }

    cin >> q; 
    int cenouras = 0;

    while (q--) {
        cin >> li >> ci >> lf >> cf;

        for (int i = li-1; i < lf; i++) {
            for (int j = ci-1; j < cf; j++) {
                cenouras += p[i][j];
                p[i][j] = 0;
            }
        }
    }

    cout << cenouras << endl;

    for (int i = 0; i < n; i++) {
        delete[] p[i];
    }
    delete[] p;

    return 0;
}