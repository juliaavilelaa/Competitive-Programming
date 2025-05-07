#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int main() { _
    int x, y, maiorx = -1001, maiory = -1001, menorx = 1001, menory = 1001;

    for (int i = 0; i < 4; i++) {
        cin >> x >> y;
        maiorx = max(maiorx, x);
        menorx = min(menorx, x);
        maiory = max(maiory, y);
        menory = min(menory, y);
    }

    x = maiorx - menorx;
    y = maiory - menory;

    cout << x*y << endl;
    
	exit(0);
}