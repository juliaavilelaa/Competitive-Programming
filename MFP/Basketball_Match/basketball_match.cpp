#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0);

int main() { _
    int n;
    cin >> n;

    string time, k;
    int t, p1 = 0, p2 = 0;
    while (n--) {
        cin >> time >> t >> k;
        if (t == 1) {
            if (k[1] == '1') {
                p1 += 1;
            } else if (k[1] == '2') {
                p1 += 2;
            } else {
                p1 += 3;
            }
        } else {
            if (k[1] == '1') {
                p2 += 1;
            } else if (k[1] == '2') {
                p2 += 2;
            } else {
                p2 += 3;
            }
        }
    }

    cout << p1 << " x " << p2 << endl;

    return 0;   
}