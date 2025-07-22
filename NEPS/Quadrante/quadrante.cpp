#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int main() { _
    int x, y;
    cin >> x >> y;

    if (x == 0 || y == 0) {
        cout << "eixos" << endl;
    } else if (x > 0 && y > 0) {
        cout << "Q1" << endl;
    } else if (x < 0 && y > 0) {
        cout << "Q2" << endl; 
    } else if (x < 0 && y < 0) {
        cout << "Q3" << endl;
    } else {
        cout << "Q4" << endl;
    }

	exit(0);
}