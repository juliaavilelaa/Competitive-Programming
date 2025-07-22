#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() { _
    int n, x = 0;
    cin >> n;

    string s;
    while (n--) {
        cin >> s;
        if (s[1] == '+') {
            x++;
        } else {
            x--;
        }
    }
    cout << x << endl;

	exit(0);
}