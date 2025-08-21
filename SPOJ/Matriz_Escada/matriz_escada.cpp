// ESCADA14
#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define pb push_back

typedef long long ll;

int main() { _
    int n, m, x, h, v, lin, col;
    bool naoZero = false, linhaZero = false, escada = true;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> x;
            if ((linhaZero && x != 0) || (x != 0 && j <= col && i > lin)) {
                escada = false;
                break;
            }
            if (x != 0 && !naoZero) {
                naoZero = true;
                lin = i;
                col = j; 
            } 
        } 
        if (!escada) break;
        if (!naoZero) linhaZero = true;
        naoZero = false;
    }

    escada ? cout << "S" : cout << "N";
    cout << endl;

	exit(0);
}	