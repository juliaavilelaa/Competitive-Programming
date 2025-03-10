#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int main() { _ 
    int N;
    cin >> N;

    map<int, int> esq, dir;
    set<int> tamanhos;
    for (int i = 0; i < N; i++) {
        int tam; char pe;
        cin >> tam >> pe;
        tamanhos.insert(tam);
        if (pe == 'E') {
            esq[tam]++;
        } else {
            dir[tam]++;
        }
    }
    int pares = 0;
    for (auto tam : tamanhos) {
        pares += min(esq[tam], dir[tam]);
    }
    cout << pares << endl;

    exit(0);
}