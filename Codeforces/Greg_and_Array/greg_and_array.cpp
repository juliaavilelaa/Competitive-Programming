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
        op.push_back({o1 - 1, o2 - 1, o3});
    }

    vector<ll> rep(m, 0);
    for (ll i = 0; i < k; i++) {
        cin >> x >> y;
        rep[x-1]++;
        if (y < m) {
            rep[y]--;
        }
    }

    ll sum = 0;
    vector<ll> aux(m, 0);
    for (int i = 0; i < m; i++) {
        sum += rep[i];
        aux[i] = sum;
    }   

    for (int i = 0; i < m; i++) {
        op[i][2] *= aux[i];
    }

    vector<ll> aux2(n, 0);
    for (int i = 0; i < m; i++) {
        aux2[op[i][0]] += op[i][2];
        if (op[i][1] + 1 < n) {
            aux2[op[i][1] + 1] -= op[i][2];
        }
    }

    sum = 0;
    for (ll i = 0; i < n; i++) {
        sum += aux2[i];
        arr[i] += sum;
        cout << arr[i];
        if (i != n-1) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}