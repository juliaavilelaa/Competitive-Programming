#include <bits/stdc++.h>
using namespace std;

#define pb push_back

bool sword_art_online(vector<pair<int, int>> dragons, int n, int s) {
    for (int i = 0; i < n; i++) {
        if (s > dragons[i].first) {
            s += dragons[i].second;
        } else {
            return false;
        }
    }
    return true;
}

int main() {
    int s, n, x, y; 
    cin >> s >> n;
    
    vector<pair<int, int>> dragons;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        dragons.pb(make_pair(x, y));
    }

    sort(dragons.begin(), dragons.end());

    if (sword_art_online(dragons, n, s)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}