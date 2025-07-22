#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int main() { _
    int p1, c1, p2, c2;
    cin >> p1 >> c1 >> p2 >> c2;

    int l1 = p1 * c1;
    int l2 = p2 * c2;

    if (l1 == l2) {
        cout << 0 << endl;
    } else if (l1 < l2) {
        cout << 1 << endl;
    } else {
        cout << -1 << endl;
    }

	exit(0);
}