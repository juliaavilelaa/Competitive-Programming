#include <bits/stdc++.h>
using namespace std;
 
#define pb push_back
 
int main() {
    int a, v, x, y, t = 0, c, maior;
    
    while (cin >> a >> v && a != 0 && v != 0) {
        maior = 0;
        vector<int> aero;
 
        for (int i = 0; i < v; i++) {
            cin >> x >> y;
            aero.pb(x);
            aero.pb(y);
        }
 
        for (int i = 1; i <= a; i++) {
            c = count(aero.begin(), aero.end(), i);
            if (c > maior) {
                maior = c;
            }
        }
 
        t++;
        cout << "Teste " << t << endl;
        for (int i = 1; i <= a; i++) {
            c = count(aero.begin(), aero.end(), i);
            if (c == maior) {
                cout << i << " ";
            }
        }
        cout << "\n\n";
    }
 
    return 0;
} 