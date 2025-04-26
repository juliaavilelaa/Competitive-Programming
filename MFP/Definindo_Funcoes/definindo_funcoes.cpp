#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int main() { _
    int m[6][6];
    vector<int> k(6, 0);

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            cin >> m[i][j]; 
        }
    }

    int maior, escolhido, soma = 0;
    for (int i = 0; i < 6; i++) {
        maior = 0;
        for (int j = 0; j < 6; j++) {
            if (m[i][j] > maior && k[j] == 0) {
                maior = m[i][j];
                escolhido = j;
            }
        }
        k[escolhido] = 1; 
        soma += maior;
    }

    cout << soma << endl;

    return 0;
}