#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n';

int main() {
    int n, m, a;
    cin >> n >> m;
    vector<int> p(m);
    
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a < m) {
            p[a]--;
        }
    }

    for (int i = 0; i < m; i++) {
        n += p[i];
        cout << n << " ";
    }
    cout << endl;

    exit(0);
}