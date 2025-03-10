#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool ehFunny(vector<char>& vogais) {
    vector<char> vogaisInversas = vogais;
    reverse(vogaisInversas.begin(), vogaisInversas.end());
    return vogais == vogaisInversas;
}

int main() {
    string risada;
    cin >> risada;

    vector<char> vogais;

    for (size_t i = 0; i < risada.size(); i++) {
        if (risada[i] == 'a' || risada[i] == 'e' || risada[i] == 'i' || risada[i] == 'o' || risada[i] == 'u') {
            vogais.push_back(risada[i]);
        }
    }

    if (ehFunny(vogais)) {
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }

    return 0;
}
