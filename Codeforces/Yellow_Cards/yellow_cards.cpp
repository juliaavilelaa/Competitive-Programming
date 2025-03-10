#include <bits/stdc++.h>
using namespace std;

int main() {
    int t1min, t2min, a1, a2, k1, k2, n, minimo, maximo = 0;

    cin >> a1 >> a2 >> k1 >> k2 >> n;

    t1min = (a1 * k1) - a1;
    t2min = (a2 * k2) - a2;

    minimo = n - (t1min + t2min);

    if (minimo < 0) {
        cout << 0 << " ";
    } else {
        cout << minimo << " ";
    }

    if ((a1 * k1 + a2 * k2) <= n) {
        cout << a1 + a2 << endl;
    } else if (k1 <= k2) {
        if (n >= a1 * k1) {
            maximo += a1;
            n -= a1 * k1;
        } else {
            while (n - k1 >= 0 && a1 > 0) {
                maximo++;
                a1--;
                n -= k1;
            }
        }
        if (n >= k2) {
            while (n - k2 >= 0 && a2 > 0) {
                maximo++;
                a2--;
                n -= k2;
            }
        }
        cout << maximo << endl;
    } else {
        if (n >= a2 * k2) {
            maximo += a2;
            n -= a2 * k2;
        } else {
            while (n - k2 >= 0 && a2 > 0) {
                maximo++;
                a2--;
                n -= k2;
            }
        }
        if (n >= k1) {
            while (n - k1 >= 0 && a1 > 0) {
                maximo++;
                a1--;
                n -= k1;
            }
        }
        cout << maximo << endl;
    }

    return 0;
}