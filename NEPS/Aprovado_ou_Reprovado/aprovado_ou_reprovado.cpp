#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int main() { _
    float a, b;
    cin >> a >> b;

    float m = (a+b)/2;
    
    if (m >= 7) {
        cout << "Aprovado" << endl;
    } else if (m >= 4) {
        cout << "Recuperacao" << endl;
    } else {
        cout << "Reprovado" << endl;
    }

	exit(0);
}