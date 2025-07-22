#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

typedef long long ll;

int main() { _
    int t, n, u, l, r, val, q, index;
    cin >> t;

    while (t--) {
        cin >> n >> u;
        vector<int> prefix(n+1), ans(n);

        for (int i = 0; i < u; i++) {
            cin >> l >> r >> val;
            prefix[l] = prefix[l] + val;

            prefix[r+1] = prefix[r+1] - val;
        }

        // debug
        // for (int i = 0; i < prefix.size(); i++) {
        //     cout << prefix[i] << " ";
        // }
        // cout << endl;

        ans[0] = prefix[0];
        for (int i = 1; i < n; i++) {
            ans[i] = ans[i - 1] + prefix[i];
        }

        cin >> q; 
        for (int i = 0; i < q; i++) {
            cin >> index;
            cout << ans[index] << endl;
        }
    }

	exit(0);
}