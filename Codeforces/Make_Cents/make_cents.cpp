#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define pb push_back
#define mkp make_pair
#define all(x) x.begin(), x.end()

typedef long long ll;

int main() { _
    int t, c, n;
    double v, total;
    string name;
    cin >> t;
 
    while(t--) {
        map<string, double> mp;
        mp["JD"] = 1; 
        total = 0;
 
        cin >> c >> n;
        for (int i = 0; i < c; i++) {
            cin >> name >> v;
            mp[name] = v;
        }
 
        for (int i = 0; i < n; i++) {
            cin >> v >> name;
            total += v*mp[name];
        }
 
        cout << setprecision(6) << fixed << total << endl;
    }
	
	exit(0);
}	