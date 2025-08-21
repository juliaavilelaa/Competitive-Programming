#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define pb push_back

typedef long long ll;

ll pow(ll x, ll y, ll m) { 
	ll ret = 1;
	while (y) {
		if (y & 1) ret = (ret * x) % m;
		y >>= 1;
		x = (x * x) % m;
	}
	return ret;
}

int main() { _
    ll b, p, m;

    while (cin >> b >> p >> m) {
        cout << pow(b, p, m) << endl;
    }

	exit(0);
}	