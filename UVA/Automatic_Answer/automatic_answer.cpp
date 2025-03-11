#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0);

int main() { _ 
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        n *= 567;
        n /= 9;
        n += 7492;
        n *= 235;
        n /= 47;
        n -= 498;

        n /= 10;
        cout << abs(n % 10) << endl;
    }

    exit(0);
}