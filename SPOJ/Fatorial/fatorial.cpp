#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

typedef long long ll;
const int MOD = 1000000000;

ll ultimo(ll n) {
    ll ans = 1;
    for (ll i = 1; i <= n; i++) {
        ans *= i;
        
        while (ans % 10 == 0) {
            ans /= 10;
        }
        ans %= MOD;
    }
    return ans % 10;
}

int main() { _
    ll n;
    ll k = 1;

    while (cin >> n) {
        cout << "Instancia " << k << endl;
        cout << ultimo(n) << endl;
        k++;
        cout << endl;
    }

	exit(0);
}