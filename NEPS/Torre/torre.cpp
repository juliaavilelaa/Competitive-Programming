#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> tabuleiro(n, vector<int>(n));
    vector<int> somaLinha(n), somaColuna(n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> tabuleiro[i][j];
            somaLinha[i] += tabuleiro[i][j];
            somaColuna[j] += tabuleiro[i][j];
        }
    }

    int maiorSoma = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int soma = somaLinha[i] + somaColuna[j] - 2 * tabuleiro[i][j];
            maiorSoma = max(maiorSoma, soma);
        }
    }

    cout << maiorSoma << endl;

    return 0;
}
