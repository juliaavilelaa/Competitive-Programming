#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int main() {
    string s, t, z;
    int n, w;

    cin >> n; 
    while (n--) {
        cin >> s >> t;
        vector<vector<int>> a(26);

        for (int i = 0; i < s.size(); i++) {
            w = s[i] - 'a';
            a[w].push_back(i);
        }

        int i = 0, j = 0, op = 1;
        while (j < t.size()) {
            w = t[j] - 'a';

            if (a[w].size() == 0) {
                op = -1;
                break;
            }
       
            int pos = upper_bound(a[w].begin(), a[w].end(), i) - a[w].begin();

            if (i > s.size() - 1 || a[w][pos] == a[w].size()) {
                op++;
                i = 0;
            } else if (a[w][pos-1] == i) {
                j++;
                pos--;
            } else {
                j++;
            }
            i = pos;
        }

        cout << op << endl;
    }

    return 0;
}