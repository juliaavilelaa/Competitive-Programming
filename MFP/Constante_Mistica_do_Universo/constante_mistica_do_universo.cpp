#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int main() { _ 
    double M1, M2, X1, X2, F;
    cin >> M1 >> M2 >> X1 >> X2 >> F;

    double D = X2 - X1;

    double G = ((D*D) * F) / (M1 * M2);

    cout << setprecision(10) << fixed << G << endl;

    exit(0);
}