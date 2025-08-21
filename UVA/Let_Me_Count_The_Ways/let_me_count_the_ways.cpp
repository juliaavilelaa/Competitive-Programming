#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define pb push_back
#define all(x) x.begin(), x.end()
#define MAX 30001

typedef long long ll;

ll ways[MAX];
ll types[] = {1, 5, 10, 25, 50};

void coinChange() {
    ways[0] = 1;
    for(ll i = 0; i < 5; i++) {
        for(ll j = types[i]; j <= MAX; j++) {
            ways[j] += ways[j-types[i]];
        }
    }
}

int main() { _
    ll n;

    coinChange();
    while (cin >> n) {
        ll ans = ways[n];
        
        if (ans > 1) {
            cout << "There are " << ans << " ways to produce " << n << " cents change." << endl;
        } else {
            cout << "There is only " << 1 << " way to produce " << n << " cents change." << endl;
        }
    }
	
	exit(0);
}	