// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define pb push_back
#define all(x) x.begin(), x.end()

typedef long long ll;

int main() { _
    int n, h, a;
    cin >> n >> h;

    int ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (h >= a) {
            ans++;
        }
    }
    cout << ans << endl;
	
	exit(0);
}	