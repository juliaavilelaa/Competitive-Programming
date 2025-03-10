#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl "\n"

int main() { _
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        map<pair<int, int>, vector<pair<int, int>>> mp;
        vector<pair<int, int>> arr;
        
        int x = 0, y = 0, ans = 0;
        pair<int, int> atual = make_pair(x, y);
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'N') {
                y++;
            } else if (s[i] == 'S') {
                y--;
            } else if (s[i] == 'E') {
                x++;
            } else {
                x--;
            }
            pair<int, int> prox = make_pair(x, y);
            bool flg = false;
            if (mp.find(atual) != mp.end()) {
                for (auto coord : mp[atual]) {
                    if (prox == coord) {
                        ans += 1;
                        flg = true;
                        break;
                    }
                }
            }
            if (!flg) {
                ans += 5;
                mp[prox].push_back(atual);
                mp[atual].push_back(prox);
            }
            atual = prox;
        }

        cout << ans << endl;
    }

    exit(0);
}