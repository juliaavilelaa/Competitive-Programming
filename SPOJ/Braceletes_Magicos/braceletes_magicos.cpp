#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0);

int main() { _
    int t; 
    cin >> t;

    string p, b, rb;
    while (t--) {
        cin >> p >> b;
        b += b;
        
        if (b.find(p) != string::npos) {
            cout << 'S' << endl;
        } else {
            rb = b;
            reverse(rb.begin(), rb.end());
            if (rb.find(p) != string::npos) {
                cout << 'S' << endl;
            } else {
                cout << 'N' << endl;
            }
        }
    }

    exit(0);
}