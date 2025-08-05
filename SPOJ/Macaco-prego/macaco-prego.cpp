#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define pb push_back

typedef long long ll;

const int INF = 0x3f3f3f3f;

int main() { _
    int n, t = 0;

    while (cin >> n && n != 0) {
        int x = -INF, y = INF, u = INF, v = -INF;
        int xin, yin, uin, vin;

        for (int i = 0; i < n; i++) {
            cin >> xin >> yin >> uin >> vin;

            x = max(x, xin);
            y = min(y, yin);
            u = min(u, uin);
            v = max(v, vin);
        }

        t++;
        cout << "Teste " << t << endl;
        if (x < u && y > v) {
            cout << x << " " << y << " " << u << " " << v << endl;
        } else {
            cout << "nenhum" << endl;
        }
        cout << endl;
    }
	exit(0);
}	