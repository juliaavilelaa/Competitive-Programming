#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() { _
    int n; cin >> n;
    string s; cin >> s;

    set<int> st;

    for (int i = 0; i < n; i++) {
        char c = tolower(s[i]);
        st.insert(c);
    }

    if (st.size() == 26) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

	exit(0);
}