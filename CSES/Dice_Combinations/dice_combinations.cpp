#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

#define ll long long
#define MOD 1000000007

ll calc(vector<ll> dp, ll n) {
    if (dp[n] != 0) {
        return dp[n];
    }
    for (ll i = 7; i <= n; i++) {
        dp[i] = dp[i-1] % MOD + dp[i-2] % MOD + dp[i-3] % MOD + dp[i-4] % MOD + dp[i-5] % MOD + dp[i-6] % MOD;
    }
    return dp[n] % MOD;
}

int main(){
    ll n; cin >> n;
    vector<ll>dp(n+7);
    dp[1] = 1; dp[2] = 2; dp[3] = 4; dp[4] = 8; dp[5] = 16; dp[6] = 32;
    cout << calc(dp, n) << endl;
    return 0;
}