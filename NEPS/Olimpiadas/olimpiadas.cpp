#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Medalhas {
    int ouro;
    int prata;
    int bronze;
    int indice;
};

bool compare(const Medalhas &a, const Medalhas &b) {
    if (a.ouro != b.ouro) {
        return a.ouro > b.ouro;
    } else if (a.prata != b.prata) {
        return a.prata > b.prata;
    } else if (a.bronze != b.bronze) {
        return a.bronze > b.bronze;
    } else {
        return a.indice < b.indice;
    }
}

int main() {
    int n, m, o, p, b;

    cin >> n >> m;
    // n = países
    // m = modalidades
    vector<Medalhas> medalhas(n);

    for (int i = 0; i < n; i++) {
        medalhas[i].indice = i+1; 
        medalhas[i].ouro = 0;
        medalhas[i].prata = 0;
        medalhas[i].bronze = 0;
    }

    for (int i = 0; i < m; i++) {
        cin >> o >> p >> b;
        medalhas[o-1].ouro++;
        medalhas[p-1].prata++;
        medalhas[b-1].bronze++;
    }

    sort(medalhas.begin(), medalhas.end(), compare);

    for (int i = 0; i < n; i++) {
        cout << medalhas[i].indice << " ";
    }
    cout << endl;

    return 0;
}