#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

vector<int> a;

int maxCoins(int i, int stations, int mx) {
    if (i >= mx) {
        return a[i];
    } 
    
    int pega = maxCoins(2*i, stations, mx);
    int pegamaisum = maxCoins(2*i+1, stations, mx);
    return a[i] + max(pega, pegamaisum);
}

int main() {
    int n;
    cin >> n;
    int stations = pow(2, n) - 1;
    
    int num;
    a.push_back(0);
    for (int i = 1; i <= stations; i++) {
        cin >> num;
        a.push_back(num);
    }

    int mx = pow(2, n-1);
    cout << maxCoins(1, stations, mx) << endl;

    return 0;
}