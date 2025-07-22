// 600B

#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() { _
    ll n, m;
    cin >> n >> m;

    vector<int> a(n+1), b(m+1);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    for (int i = 0; i < m; i++) {
        cin >> b[i];
        auto pos = lower_bound(a.begin(), a.end(), b[i]) - a.begin();
        cout << pos << " ";
    }
    cout << endl;

	exit(0);
}