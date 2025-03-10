#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int main() { _ 
    int n, m, l, r;

    cin >> n >> m;
    vector<int> v (n);

    for (int i = 0; i < m; i++) {
        cin >> l >> r;
    }
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            cout << 1;
        } else {
            cout << 0;
        }
    }

    cout << endl;
    
    exit(0);
}