#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

typedef long long ll;

int main() { _
    int n, a, ans = 0, pair = 0;
    cin >> n;
    map<int, int> s;

    for (int i = 0; i < n; i++) {
        cin >> a;
        s[a]++;

        if (s[a] >= 2) {
            s[a] -= 2;
            pair++;
        }
        if (pair == 2) {
            ans++;
            pair -= 2;
        }
    }
    cout << ans << endl;

	exit(0);
}