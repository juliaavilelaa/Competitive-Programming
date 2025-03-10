#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl "\n"

int main() { _
    int k;
    cin >> k;

    vector<int> v(12);
    for (int i = 0; i < 12; i++) {
        cin >> v[i];
    }

    sort(v.rbegin(), v.rend());

    int ans = 0, c = 0;
    for (int i = 0; i < 12; i++) {
        if (c < k) {
            c += v[i];
            ans++;
        } else {
            break;
        }
    }
    if (c < k) {
        cout << -1 << endl;
    } else {
        cout << ans << endl;
    }

    exit(0);
}