#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() { 
    int x, y, maiorY = -1001, maiorX = -1001, menorY = 1001, menorX = 1001;

    for (int i = 0; i < 4; i++) {
        cin >> x >> y;
        maiorX = max(maiorX, x);
        menorX = min(menorX, x);
        maiorY = max (maiorY, y);
        menorY = min(menorY, y);
    }

    int area = (maiorX-menorX)*(maiorY-menorY);
    cout << area << endl;

    return 0;
}