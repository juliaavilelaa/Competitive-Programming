#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, somaDiag = 0, somaDiagSec = 0, somaLinha = 0, somaColuna = 0;

    cin >> n;

    vector<vector<int>> quadrado(n, vector<int>(n));
    vector<int> linha(n), coluna(n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> quadrado[i][j];
            linha[i] += quadrado[i][j];
            coluna[j] += quadrado[i][j];
        }
    }

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {

            if (i == j) {
                somaDiag += quadrado[i][j];
            }
            if (i + j == n - 1) {
                somaDiagSec += quadrado[i][j];
            } 
            
        }
        somaLinha += linha[i];
        somaColuna += coluna[i];
        
        if (somaLinha != somaColuna) {
            cout << -1 << endl;
            return 0;
        }
    }

    if (somaLinha/n == somaDiag && somaColuna/n == somaDiagSec && somaDiag == somaDiagSec) {
        cout << somaDiag << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}