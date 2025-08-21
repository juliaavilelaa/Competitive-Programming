// ADAPLANT
#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define pb push_back
#define all(x) x.begin(), x.end()

typedef long long ll;

const int MAX = 3*10e6;
vector<int> segMIN(4*MAX, -1), segMAX(4*MAX, -1);

void build(int v[], int i, int l, int r) {
    if (l == r) {
        segMIN[i] = v[l];
        segMAX[i] = v[l];
        return;
    }
    int m = (l+r)/2;
    build(v, 2*i+1, l, m), build(v, 2*i+2, m+1, r);
    segMIN[i] = min(segMIN[2*i+1], segMIN[2*i+2]);
    segMAX[i] = max(segMAX[2*i+1], segMAX[2*i+2]);
}

int queryMIN(int a, int b, int i, int l, int r) {
    if (r < a || l > b) return INT_MAX;
    if (l >= a && r <= b) return segMIN[i];
    int m = (l+r)/2;
    return min(queryMIN(a, b, 2*i+1, l, m), queryMIN(a, b, 2*i+2, m+1, r));
}   

int queryMAX(int a, int b, int i, int l, int r) {
    if (r < a || l > b) return 0;
    if (l >= a && r <= b) return segMAX[i];
    int m = (l+r)/2;
    return max(queryMAX(a, b, 2*i+1, l, m), queryMAX(a, b, 2*i+2, m+1, r));
}

int main() { _
    int t, n, k;
    cin >> t;

    while (t--) {
        cin >> n >> k;
        int v[n];

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        build(v, 0, 0, n-1);

        int qnt = (k == 0) ? n : n-k-1;
        if (qnt <= 0) qnt = 1;

        int dif, ans = 0;
        for (int i = 0; i < qnt; i++) {
            dif = abs(queryMAX(i, i+k+1, 0, 0, n-1) - queryMIN(i, i+k+1, 0, 0, n-1));
            ans = max(ans, dif); 
        }

        cout << ans << endl;
    }

	exit(0);
}	