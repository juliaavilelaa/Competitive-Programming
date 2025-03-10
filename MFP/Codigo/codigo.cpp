#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int main() { _ 
    int bit, seg, um = 0, zero = 0;

    for (int i = 0; i < 7; i++) {
        cin >> bit;
        if (bit == 1) {
            um++;
        }
    }
    cin >> seg;
    if ((um % 2 == 0 && seg == 0) || um % 2 != 0 && seg == 1) {
        cout << "N?" << endl;
    } else {
        cout << "S" << endl;
    }

    exit(0);
}