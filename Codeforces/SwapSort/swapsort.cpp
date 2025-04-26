#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
typedef long long ll;

int main() { _
    int n;
    cin >> n;

    vector<int> v(n), s(n);
    vector<pair<int, int>> swaps;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    s = v;
    sort(s.begin(), s.end());

    int ps = 0, c = 0;
    for (int i = 0; i < n; i++) {
        int pv = i;
        while (v[pv] != s[ps]) {
            pv++;
        }
        v[pv] = v[i];
        v[i] = s[ps]; 
        swaps.emplace_back(i, pv);
        ps++;
        c++;
    }
    
    cout << c << endl;
    for (int i = 0; i < swaps.size(); i++) {
        cout << swaps[i].first << " " << swaps[i].second << endl;
    }

    return 0;
}