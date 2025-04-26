#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
typedef long long ll;

int main() { _
    int m[6][6];
    int x, y, ans = 0;

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cin >> m[i][j];
            if (m[i][j] == 1) {
                x = i;
                y = j;
            }
        }
    }

    ans += abs(y - 3);
    ans += abs(x - 3);

    cout << ans << endl;

    return 0;
}