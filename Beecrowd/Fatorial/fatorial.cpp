#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
typedef long long ll;

int main() { _
    int n;
    cin >> n;
    vector<int> fat(11);

    fat[0] = 1;
    for (int i = 1; i <= 10; i++) {
        fat[i] = fat[i-1] * i;
    }
    
    int ans = 0;
    for (int i = 10; i > 0; i--) {
        int vzs = n/fat[i];
        ans += vzs;
        n -= vzs*fat[i];
    }
    cout << ans << endl;

    return 0;
}