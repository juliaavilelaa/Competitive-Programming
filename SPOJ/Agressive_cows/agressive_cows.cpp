//AGGRCOW - SPOJ
#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

bool verify(vector<int> v, int dist, int c) {
    int cont = 1;
    int pos = v[0];

    for (int i = 1; i < v.size(); i++) {
        if (v[i] - pos >= dist) {
            cont++;
            pos = v[i];
        }
    }
    if (cont < c) {
        return false;
    }
    return true;
}

int binary_search(vector<int> v, int n, int c) {
    int low = 1, high = v[n-1] - v[0], mid = 0, ans = 0;

    while (low <= high) {
        mid = (low + high) / 2;        
        if (verify(v, mid, c)) {
            low = mid + 1;
            ans = mid;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

int main() { _
    int t, n, c;
    cin >> t;

    while (t--) {
        vector<int> v;
        cin >> n >> c;
        for (int i = 0; i < n; i++) {
            int s; 
            cin >> s;
            v.push_back(s);
        }
        sort(v.begin(), v.end());
        cout << binary_search(v, n, c) << endl;
    }

    return 0;
}