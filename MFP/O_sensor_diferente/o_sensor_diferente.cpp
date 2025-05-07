#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

typedef long long ll;

int main() { _
    int t, a, b, c; 
    cin >> t;

    while (t--) {
        cin >> a >> b >> c;

        if (a != b && a != c) {
            cout << a << endl;
        } else if (b != a && b != c) {
            cout << b << endl;
        }
        else {
            cout << c << endl;
        }
    }

	return 0;
}