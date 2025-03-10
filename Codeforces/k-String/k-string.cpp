// Summer School - Dia 7
#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

typedef long long ll;

int main() { _
    int k;
    string s;
    map<char, int> mp;
    vector<char> v;

    cin >> k >> s;

    for (int i = 0; i < s.size(); i++) {
        mp[s[i]]++;
        if (mp[s[i]] == 1) {
            v.push_back(s[i]);
        }
    }
    
    for (int i = 0; i < v.size(); i++) {
        if (mp[v[i]] % k != 0) {
            cout << -1 << endl;
            return 0;
        } else {
            mp[v[i]] = mp[v[i]]/k;
        }
    }

    while (k--) {
        for (int i = 0; i < v.size(); i++) {
            for (int j = 0; j < mp[v[i]]; j++) {
                cout << v[i];
            }
        }
    }
    cout << endl;

	return 0;
}