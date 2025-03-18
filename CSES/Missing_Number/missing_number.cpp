#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0);

int main() { _
    int n, num;
    cin >> n;
    vector<int> v(n+1);

    for (int i = 1; i < n; i++) {
        cin >> num;
        v[num] = 1;
    }

    for (int i = 1; i <= n; i++) {
        if (v[i] == 0) {
            cout << i << endl;
            break;
        }
    }
    
    return 0;
}