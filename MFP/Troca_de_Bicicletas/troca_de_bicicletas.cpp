#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int main() { _ 
    int t, n;

    cin >> t;

    while (t--) {
        cin >> n;
        
        vector<int> b(n+1);
        for (int i = 1; i <= n; i++) {
            cin >> b[i];
        }
        for (int p = 1; p <= n; p++) {
            int i = p;
            while (true) {
                cout << i << " ";
                if (b[i] == p) {
                    cout << endl;
                    break;
                }
                i = b[i];
            }
        }
    }

    return 0;
}