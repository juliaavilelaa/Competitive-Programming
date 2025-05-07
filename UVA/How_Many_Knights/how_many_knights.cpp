#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(); cin.tie(0);
#define endl '\n'

int calc_knights(int m, int n) {
    int k;
    int minside = min(m, n);
    int maxside = max(m, n);

    if (minside == 1) {
        k = maxside;
    } else if (minside == 2) {

    } else {
        k = ((minside * maxside) + 1)/2;
    }

    return k;
}

int main() { _ 
    int m, n, k, row, col;

    while (cin >> m >> n) {
        if (m == 0 && n == 0) {
            break;
        }
        k = calc_knights(m, n);
        row = m;
        col = n;
        cout << k << " knights may be placed on a " << row << " row " << col << " column board." << endl;
    }

    return 0;
}