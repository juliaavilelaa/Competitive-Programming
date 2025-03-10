#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int main() { _
    int q, n;

    cin >> q;

    while (q--) {
        cin >> n;
        if (n < 4) {
            cout << 4-n << endl;
        } else if (n % 2 == 0) {
            cout << 0 << endl;
        } else {
            cout << 1 << endl;
        }
    }

    exit(0);
}