#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'



int main() { _
    int t, a, b;
    cin >> t;

    while (t--) {
        cin >> a >> b;

        int dig;
        if ((a <= 10 || a % 10 == 0) && (b <= 10 || b % 10 == 0)) {
            cout << a << " x " << b << endl;
        }

        else if (a > 10 && a % 10 != 0) {
            dig = a % 10;
            a -= dig;

            cout << a << " x " << b << " + " << dig << " x " << b << endl;
        } 

        else if (b > 10 && b % 10 != 0) {
            dig = b % 10;
            b -= dig; 

            cout << b << " x " << a << " + " << dig << " x " << a << endl;
        }
    }

    // string a, b;
    // while (t--) {
    //     cin >> a >> b;
    //     int asize = a.size() - 1;
    //     int bsize = b.size() - 1;

    //     string zero = "0";
    //     vector<string> va, vb;
    //     string n;
    //     for (int i = 0; i < a.size(); i++) {
    //         if (a[i] != '0' && a[i] != '-') {
    //             n = a[i] + string(asize, '0');
    //             va.push_back(n);
    //         }
    //         asize--;
    //     }
        
    //     for (int i = 0; i < b.size(); i++) {
    //         if (b[i] != '0' && b[i] != '-') {
    //             n = b[i] + string(bsize, '0');
    //             vb.push_back(n);
    //         }
    //         bsize--;
    //     }

    //     int lim = va.size()*vb.size(), c = 0;
    //     for (int i = 0; i < va.size(); i++) {
    //         for (int  j = 0; j < vb.size(); j++) {
    //             cout << va[i] << " x " << vb[j];
    //             c++;
    //             if (c != lim) {
    //                 cout << " + ";
    //             }
    //         }
    //     }
    //     cout << endl; 
    // }

    return 0;
}