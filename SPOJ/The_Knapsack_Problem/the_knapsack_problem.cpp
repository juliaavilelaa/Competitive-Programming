#include <iostream>
#include <vector>
#include <cmath>
#include <cstring>
using namespace std;

#define ll long long int
#define pb push_back

ll s, n;
ll memo[2002][2002];
// map<pair<ll, pair<ll, ll>>, ll> memo;
vector<pair<ll, ll>> v;

ll dp(ll index, ll size) {
    if (size > s) {
        return 0;
    }
    if (index == n) {
        return 0;
    }
    // if (memo.find(make_pair(index, make_pair(size, value))) != memo.end()) {
    //     return memo[(make_pair(index, make_pair(size, value)))];
    // }
    if (memo[index][size] != -1) {
        return memo[index][size];
    }

    ll p = 0;
    if (size + v[index].first <= s) {
        p += v[index].second + dp(index + 1, size + v[index].first);
    }
    ll np = dp(index + 1, size);
    // return memo[(make_pair(index, make_pair(size, value)))] = max(v1, v2);
    return memo[index][size] = max(p, np);
}

int main() {
    cin >> s >> n;
    memset(memo, -1, sizeof(memo));
    
    for (int i = 0; i < n; i++) {
        ll size, value;
        cin >> size >> value;
        v.pb(make_pair(size, value));
    }
    cout << dp(0, 0) << endl;

    return 0;
}