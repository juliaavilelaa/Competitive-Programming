// UVA 11468

#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

typedef long long ll;

int main() { _
    int n, a;

    while (cin >> n && n != 0) {
        vector<int> arr;
    
        for (int i = 0; i < n; i++) {
            cin >> a;
            arr.push_back(a); 
        }
        sort(arr.begin(), arr.end());
        for (int i = 0; i < n; i++) {
            cout << arr[i]; 
            if (i < n-1) {
                cout << " ";
            }
        }
        cout << endl;
    }
	exit(0);
}
