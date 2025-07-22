#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() { _
    int x;
    cin >> x;

    int ans = 0;
    ans += x/5;
    
    if (x%5 != 0) {
        ans++;
    }

    cout << ans << endl;

	exit(0);
}