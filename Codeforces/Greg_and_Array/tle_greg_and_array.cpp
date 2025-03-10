#include <iostream>
#include <vector>
using namespace std;

#define ll long long int

int main() {
    ll n, m, k, num, o1, o2, o3, x, y;
    vector<ll> arr;
    vector<vector<ll>> op;

    cin >> n >> m >> k;

    for (ll i = 0; i < n; i++) {
        cin >> num;
        arr.push_back(num);
    }

    for (ll i = 0; i < m; i++) {
        cin >> o1 >> o2 >> o3;
        op.push_back({o1, o2, o3});
    }

    vector<ll> cont(m);
    for (ll i = 0; i < k; i++) {
        cin >> x >> y;
        for (ll j = x-1; j < y; j++) {
            cont[j]++;
        }
    }

    for (ll i = 0; i < op.size(); i++) {
        for (ll j = op[i][0]-1; j < op[i][1]; j++) {
            arr[j] += (op[i][2] * cont[i]);
        }
    }

    for (ll i = 0; i < n; i++) {
        cout << arr[i];
        if (i != n-1) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}