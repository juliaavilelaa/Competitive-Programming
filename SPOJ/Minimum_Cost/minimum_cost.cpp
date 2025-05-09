// MC - Minimum Cost
#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

typedef long long ll;

const int N = 1020;
int dp[N][N] = {0};

inline int lcs(string s, string t) {
    int m = s.size();
    int n = t.size();

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (s[i-1] == t[j-1]) {
                dp[i][j] = 1 + dp[i-1][j-1];
            } else {
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    return dp[m][n];
}

inline int ans(string s, string t) {
    int l = lcs(s, t);
    return (s.size() - l) * 15 + (t.size() - l) * 30;
}

int main() { _
    string s, t;

    while (cin >> s && s != "#") {
        cin >> t;
        cout << ans(s, t) << endl;
    }

	return 0;
}