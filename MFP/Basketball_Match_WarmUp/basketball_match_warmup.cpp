#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() { _
    int n;
    cin >> n;

    string time, k;
    int t, t1 = 0, t2 = 0;
    while (n--) {
        cin >> time >> t >> k; 
        if (t == 1) {
            if (k[1] == '1') {
                t1 += 1;
            } else if (k[1] == '2') {
                t1 += 2;
            } else {
                t1 += 3;
            }
        } else {
            if (k[1] == '1') {
                t2 += 1;
            } else if (k[1] == '2') {
                t2 += 2;
            } else {
                t2 += 3;
            }
        }
    }

    cout << t1 << " x " << t2 << endl;

	exit(0);
}