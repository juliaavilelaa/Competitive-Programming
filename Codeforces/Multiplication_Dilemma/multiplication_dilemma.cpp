#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int main() { _
    int t;
    cin >> t;

    string a, b;
    while (t--) {
        cin >> a >> b;
        vector<string> va, vb;
        bool neg = false;
        string n, z = "";
        for (int i = a.size()-1; i >= 0; i--) {
            if (a[i] != '0' && a[i] != '-') {
                n = a[i] + z;
                va.push_back(n);
            }
            if (a[0] == '-') {
                bool neg = true;
            }
            z += "0";
        }
        z = "";
        for (int i = b.size()-1; i >= 0; i--) {
            if (b[i] != '0' && b[i] != '-') {
                n = b[i] + z;
                vb.push_back(n);
            }
            if (b[0] == '-') {
                bool neg = true;
            }
            z += "0";
        }

        int lim = va.size()*vb.size(), c = 0;
        for (int i = 0; i < va.size(); i++) {
            for (int  j = 0; j < vb.size(); j++) {
                cout << va[i] << " x " << vb[j];
                c++;
                if (c != lim) {
                    cout << " + ";
                }
            }
        }
        cout << endl; 
    }

    return 0;
}