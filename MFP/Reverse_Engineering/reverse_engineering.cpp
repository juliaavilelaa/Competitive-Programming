#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

typedef long long ll;

int main() { _
    int n, m;
    cin >> n >> m;

    int arr[n][m];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];

            // par
            if (i%2==0 && j%2==0 && arr[i][j]%2 != 0) { arr[i][j]++; } 
            if (i%2==1 && j%2==1 && arr[i][j]%2 != 0) { arr[i][j]++; }

            // ímpar
            if (i%2==1 && j%2==0 && arr[i][j]%2 != 1) { arr[i][j]++; } 
            if (i%2==0 && j%2==1 && arr[i][j]%2 != 1) { arr[i][j]++; }

            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

	exit(0);
}