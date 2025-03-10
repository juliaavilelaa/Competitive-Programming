#include <iostream>
using namespace std;

int main() {
    int n, m, somaLinha = 0, somaColuna = 0, maior = 0;

    cin >> n >> m;
    // linhas, colunas

    int campo[n][m];

    for (int i = 0; i < n; i++) {
        somaLinha = 0;
        for (int j = 0; j < m; j++) {
            cin >> campo[i][j];
            somaLinha += campo[i][j];
        }
        maior = max(maior, somaLinha);
    }

    for (int j = 0; j < m; j++) {
        somaColuna = 0;
        for (int i = 0; i < n; i++) {
            somaColuna += campo[i][j];
        }
        maior = max(maior, somaColuna);
    }

    cout << maior << endl;

    return 0;
}