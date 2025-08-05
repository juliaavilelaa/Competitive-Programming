// UVA 10252
#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

typedef long long ll;

int main() { _
    string a, b;

    while (getline(cin, a) && getline(cin, b)) {
        int m = a.size(), n = b.size(); 
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int dp[m+1][n+1];
        memset(dp, 0, sizeof(dp));
        
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if (a[i-1] == b[j-1]) {
                    dp[i][j] = 1 + dp[i-1][j-1];
                } else {
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }

        int i = m;
        int j = n;
        string x = "";

        while (i > 0 && j > 0) {
            if (a[i-1] == b[j-1]) {
                x += a[i-1];
                i--;
                j--;
            } else if (dp[i-1][j] > dp[i][j-1]) {
                i--;
            } else {
                j--;
            }
        }
        sort(x.begin(), x.end());
        cout << x << endl;
    }

	exit(0);
}