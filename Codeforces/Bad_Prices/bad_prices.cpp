#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int main() { _
    int t;
    
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        int ans = 0, p;
        for (int i = 0; i < n; i++) {
            cin >> p;
            while (!arr.empty() && p < arr.back()) {
                arr.pop_back();
                ans++;
            }
            arr.push_back(p);
        }
        cout << ans << endl;
    }

    exit(0);
}