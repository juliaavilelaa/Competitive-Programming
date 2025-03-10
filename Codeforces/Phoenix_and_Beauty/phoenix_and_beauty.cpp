#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl "\n"

int main() { _ 
    int t;
    cin >> t;

    while (t--) {
        int n, k, a;
        cin >> n >> k;
        set<int> st;

        for (int i = 0; i < n; i++) {
            cin >> a;
            st.insert(a);
        }
        int sz = st.size();
        if (sz > k) {
            cout << -1 << endl;
        } else {
            
        }
    }

    exit(0);
}