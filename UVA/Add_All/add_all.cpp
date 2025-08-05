#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define pb push_back

typedef long long ll;

int main() { _
    ll n;
    
    while (cin >> n && n != 0) {
        vector<ll> arr(n);
        vector<ll> sum(n-1);
        ll cost = 0;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());

        sum[0] = arr[0] + arr[1];
        cost += sum[0];
   
        for (int i = 1; i < n-1; i++) {
            sum[i] = sum[i-1] + arr[i+1];
            cost += sum[i];
        }

        cout << cost << endl;
    }

	exit(0);
}	