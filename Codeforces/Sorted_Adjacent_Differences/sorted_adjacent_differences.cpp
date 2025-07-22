#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

typedef long long ll;

int main() { _
    int t, n, mid, odd;
    bool flag;
    cin >> t;

    while (t--) {
        cin >> n;
        flag = false;
        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());

        mid = n/2;
        // cout << mid << endl;

        if (n % 2 != 0) {
            odd = arr[mid];
            cout << odd << " ";
            // cout << odd << endl;
            // flag = true;
        }

        // vector<int> rearr;
        int l = mid-1, r = mid;
        if (flag) {
            r++;
        }
        // cout << "l = " << l << " r = " << r << endl;

        int cont = 0;
        while (l >= 0 && r < n) {
            // rearr.push_back(arr[r]);
            cout << arr[l] << " ";
            cont++;
            // if (flag && cont == mid) {
            //     cout << odd << " ";
            //     // rearr.push_back(odd);
            // }
            // rearr.push_back(arr[l]);
            cout << arr[r] << " ";
            cont++;

            // if (flag && cont == mid) {
            //     cout << odd << " ";
            //     // rearr.push_back(odd);
            // }
            r++;
            l--;
        }
        cout << endl;
    }

    exit(0);
}