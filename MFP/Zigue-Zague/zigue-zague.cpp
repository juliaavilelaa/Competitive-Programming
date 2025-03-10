#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int main() { _ 
    double d, m, x, y;

    cin >> d >> m;

    double h;
    int c = 0;
    h = sqrt(2 * (d*d));
    
    while (h < m) {
        m -= h;
        x += d;
        c++;
    }

    x += (m * d) / h;
    if (c % 2 == 0) {
        y = (m * d) / h;
    } else {
        y = d - ((m * d) / h);
    }
    cout << setprecision(10) << fixed;
    cout << x << " " <<  y << endl;

    exit(0);
}