#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl "\n"

int main() { _
    string s;
    set<string> joias;

    while (cin >> s) {
        joias.insert(s);
    }
    int ans = joias.size();
    cout << ans << endl;

    exit(0);
}