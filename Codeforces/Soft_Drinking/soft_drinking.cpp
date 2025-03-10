#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int ml = (k * l)/nl;
    int gs = p/np;
    int s = c * d; 

    int toasts = min({ml, gs, s})/n;

    cout << toasts << endl;

    return 0;
}