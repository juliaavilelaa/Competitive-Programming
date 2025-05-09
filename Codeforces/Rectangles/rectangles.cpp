#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

typedef long long ll;

const int N = 51;
int dp[N][N] = {0};

inline int rectangles(int n, int m) {
    int hops = 4;

    dp[2][2] = 4;
    for (int i = 2; i <= 50; i++) {
        for (int j = 2; j <= 50; j++) {
            if (dp[i][j] == 0) {
                dp[i][j] = dp[i][j-1] + hops;
                dp[j][i] = dp[i][j-1] + hops;
            }
        }
        hops += 3;
    }

    return dp[n][m];
}

int main() { _
    int n, m;
    cin >> n >> m;

    int cell;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> cell;
            if (i == 1 || j == 1) {
                dp[i][j] = max(i, j);
            }
        }
    }
    
    cout << rectangles(n, m) << endl;

	return 0;
}