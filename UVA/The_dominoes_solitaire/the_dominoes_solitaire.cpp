#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define pb push_back

typedef long long ll;

int n, m;
pair<int, int> primeira, ultima;

bool solve(int cont, map<pair<int, int>, int> &peca, int lado) {
    if (cont == 0 && (lado == ultima.first || lado == ultima.second)) {
        return true;
    } else if (cont == 0) {
        return false;
    }

    for (auto it = peca.begin(); it != peca.end(); it++) {
        if (it->first.first == lado && it->second == 0) {
            it->second = 1;
            cont--;
            if(solve(cont, peca, it->first.second)) {
                return true;
            }
            cont++;
            it->second=0;
        }

        if(it->first.second == lado && it->second == 0) {
            it->second = 1;
            cont--;
            if(solve(cont, peca, it->first.first)) {
                return true;
            }
            cont++;
            it->second=0;
        }
    }

    return false;
}

int main() { _
    while (cin >> n && n != 0) {
        cin >> m;
        map<pair<int, int>, int> peca;
        int cont = n;

        int f, s;
        // primeira peca 
        cin >> f >> s;
        primeira = make_pair(f, s);

        // ultima peca 
        cin >> f >> s;
        ultima = make_pair(f, s);

        for (int i = 0; i < m; i++) {
            cin >> f >> s;
            peca[make_pair(f, s)] = 0;
        }

        if (solve(cont, peca, primeira.first)) {
            cout << "YES" << endl;
        } else {
            cont = n;
            if (solve(cont, peca, primeira.second)) { 
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

	exit(0);
}	