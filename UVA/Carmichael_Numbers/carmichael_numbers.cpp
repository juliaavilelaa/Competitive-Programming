#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define pb push_back

typedef long long ll;

ll mul(ll a, ll b, ll m) {
	ll ret = a*b - ll((long double)1/m*a*b+0.5)*m;
	return ret < 0 ? ret+m : ret;
}

ll pow(ll x, ll y, ll m) {
	if (!y) return 1;
	ll ans = pow(mul(x, x, m), y/2, m);
	return y%2 ? mul(x, ans, m) : ans;
}

bool prime(ll n) {
	if (n < 2) return 0;
	if (n <= 3) return 1;
	if (n % 2 == 0) return 0;
	ll r = __builtin_ctzll(n - 1), d = n >> r;

	for (int a : {2, 325, 9375, 28178, 450775, 9780504, 1795265022}) {
		ll x = pow(a, d, n);
		if (x == 1 or x == n - 1 or a % n == 0) continue;
		
		for (int j = 0; j < r - 1; j++) {
			x = mul(x, x, n);
			if (x == n - 1) break;
		}
		if (x != n - 1) return 0;
	}
	return 1;
}

int main() { _
    ll n;
    bool carmichael, isPrime; 

    while (cin >> n && n != 0) {
        isPrime = prime(n);

        carmichael = true;

        if (isPrime) {
            cout << n << " is normal." << endl;
        } else {
            for (ll a = 2; a < n-1; a++) {
                if (pow(a, n, n) != a) {
                    carmichael = false;
                    break;
                }
            }

            if (carmichael) {
                cout << "The number " << n << " is a Carmichael number." << endl;
            } else {
                cout << n << " is normal." << endl;
            }
        }
    }

	exit(0);
}	