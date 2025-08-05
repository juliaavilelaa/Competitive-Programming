#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define pb push_back

typedef long long ll;

int main() { _
    ll n, m, b = 0, w = 0, sets = 0;
    ll pow[51];
    
    cin >> n >> m;
    ll cell[n][m];

    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < m; j++) {
            cin >> cell[i][j];
        }
    }
    
    pow[0] = 1;
    for(ll i = 1; i < 51; i++) {
        pow[i] = pow[i-1] * 2;
    }

    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < m; j++) {
            if (cell[i][j] == 1) { b++; }
            else { w++; }
        }
        sets += pow[b] - 1;
        sets += pow[w] - 1;

        b = 0; w = 0;
    }

    for(ll j = 0; j < m; j++) {
        for(ll i = 0; i < n; i++) {
            if (cell[i][j] == 1) { b++; }
            else { w++; }
        }
        sets += pow[b] - 1;
        sets += pow[w] - 1;

        b = 0; w = 0;
    }

    sets -= n*m;
    cout << sets << endl;

	return 0;
}	