#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int main() { _ 
    int m, n; 
    cin >> m >> n;

    int a, b, c;
    a = (m*m) - (n*n);
    b = 2*m*n;
    c = (m*m) + (n*n);

    cout << a << " " << b << " " << c << endl;

    exit(0);
}