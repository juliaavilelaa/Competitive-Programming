#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

typedef long long ll;

int main() { _
    int t, a, b, x, y;

    cin >> t;

    while (t--) {
        cin >> a >> b >> x >> y;

        int a1 = a*(b-y-1);
        int a2 = b*(a-x-1);
        int a3 = b*x;
        int a4 = a*y;

        cout << max(a1, max(a2, max(a3, a4))) << endl;
    }

	exit(0);
}