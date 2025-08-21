// WA
#include <iostream>
#include <vector>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define pb push_back
#define all(x) x.begin(), x.end()

typedef long long ll;

const int MAX = 10e5;
vector<int> seg(MAX*4);

ll build(int v[], int p, int l, int r) {
    if (l == r) return seg[p] = v[l];
    int m = (l+r)/2;
    return seg[p] = build(v, 2*p+1, l, m) + build(v, 2*p+2, m+1, r);
}

ll query(int a, int b, int p, int l, int r) {
    if (a <= l && r <= b) return seg[p];
    if (b < l || r < a) return 0;
    int m = (l+r)/2;
    return query(a, b, 2*p+1, l, m) + query(a, b, 2*p+2, m+1, r);
}

int main() { _
    ll n, ans = 0;
    cin >> n;
    int v[n];

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        // if (v[i] == 1) ans++;
    }
    
    build(v, 0, 0, n-1);
    
    ll a = 1, b = n-2;
    if (query(0, n-1, 0, 0, n-1) % 2 != 0) ans++;

    while (a <= b) {
        if (query(a, n-1, 0, 0, n-1) % 2 != 0) ans++;
        if (query(0, b, 0, 0, n-1) % 2 != 0) ans++;
        if (query(a, b, 0, 0, n-1) % 2 != 0) ans++;
        a++;
        b--;
    }
    int cont = n/2;
    a = 0;
    b = cont;
    if (n%2 != 0) {
        b++;
    }
    while (cont--) {
        if (query(0, a, 0, 0, n-1) % 2 != 0) ans++;
        if (query(b, n-1, 0, 0, n-1) % 2 != 0) ans++;
        a++;
        b++;
    }

    cout << ans << endl;
	
	exit(0);
}	