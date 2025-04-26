#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
typedef long long ll;

ll maxsubsum(vector<ll> v, int n) {
    ll curr = -1000000007, maxsum = -1000000007;
    for (ll i = 0; i < n; i++) {
        curr = max(v[i], v[i] + curr);
        maxsum = max(curr, maxsum);
    }
    return maxsum;
}

int main() {
    ll n; cin >> n;

    vector<ll> v(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }
    cout << maxsubsum(v, n) << endl; 

    return 0;
}