#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

typedef long long ll;

const int N = 51;
int dp[N][N] = {0};

inline int lines(int n, int m) {
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

int verify(int x, int y) {
    int dx[] = {1, 0, -1, 0}, dy[] = {1, 0, -1, 0};

    for (int i = 0; i < 4; i++) {
        int xi = x + dx[i];
        int yi = y + dy[i];
    }
}

inline int pairs(vector<vector<int>> r, int n, int m) {
    pair<int, int> p; 

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {

        }
    }
}

int main() { _
    int n, m;
    cin >> n >> m;

    int cell;
    vector<vector<int>> r(n + 1, vector<int>(m + 1, 0));

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> cell;
            r[i][j] = cell;
            if (i == 1 || j == 1) {
                dp[i][j] = max(i, j);
            }
        }
    }
    
    cout << lines(n, m) + pairs(r, n, m) << endl;

	return 0;
}