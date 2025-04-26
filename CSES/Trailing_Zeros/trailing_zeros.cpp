#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
typedef long long ll;
const ll MOD = 1000000000;

int main() { _
    ll n, ans = 0;
    cin >> n;

    ll fat = 1;
    for (ll i = 1; i <= n; i++) {
        fat *= i;
        
        while (fat % 10 == 0) {
            fat /= 10;
            ans++;
        }
        ans %= MOD;
    }
    cout << ans << endl;

    return 0;
}