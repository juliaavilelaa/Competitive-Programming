#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define pb push_back

typedef long long ll;

ll fib[55];

void calc() {
    fib[0] = 1;
    fib[1] = 1;
    
    for (int i = 2; i <= 52; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }
}

int main() {
    ll t, n;

    cin >> t;
    calc();

    ll i = 1;
    while (t--) {
        cin >> n;
        cout << "Scenario #" << i << ":" << endl << fib[n+1] << endl << endl;
        i++;
    }
    
    return 0;
}