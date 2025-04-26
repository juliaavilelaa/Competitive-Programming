#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define pb push_back
typedef long long ll;

int main() { _ 
    ll n, p, len;
    vector<ll> v;

    cin >> n;
    for (ll i = 0; i < n; i++) {
        cin >> p;
        v.pb(p);
    }
    sort(v.begin(), v.end());
    if (n%2 == 0) {
        len = v[(n/2)-1];
    } else {
        len = v[n/2];
    }
    ll c = 0;
    for (ll i = 0; i < n; i++) {
        c += abs(len - v[i]);
    }
    cout << c << endl;

    return 0;
}