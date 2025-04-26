#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
    int n, sports = 0;
    cin >> n;

    if (n >= 8) {
        n -= 8;
        sports++;
    }
    if (n >= 4) {
        n -= 4;
        sports++;
    }
    if (n >= 2) {
        n -= 2;
        sports++;
    }
    if (n >= 1) {
        sports++;
    }

    cout << sports << endl;
    return 0;
}