#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    cin >> n;

    int arr[n][n];

    for (int ini = 0; ini < n; ini++) {
        for (int inj = 0; inj < n; inj++) {
            cin >> arr[ini][inj];
        }
    }

    for (int i = 0; i < n; i++) {
        int k = i;
        for (int j = 0; j <= i; j++) {
            cout << arr[k][j] << " ";
            k--;
        }
    }

    for (int i = 1; i < n; i++) {
        int k = n - 1;
        for (int j = i; j < n; j++) {
            cout << arr[k][j] << " ";
            k--;
        }
    }
    cout << endl;

    return 0;
}