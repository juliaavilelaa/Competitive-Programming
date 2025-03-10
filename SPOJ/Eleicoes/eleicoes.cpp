#include <iostream>
#include <set>
using namespace std;

int main() {
    int n, x, v, vencedor, maxV = 0;
    multiset<int> votos;
    set<int> candidatos;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        votos.insert(x);
        candidatos.insert(x);
    }

    for (auto it = candidatos.begin(); it != candidatos.end(); it++) {
        v = votos.count(*it);
        if (v > maxV) {
            maxV = v;
            vencedor = *it;
        }
    }

    cout << vencedor << endl;

    return 0;
}