// Pato Ganso
#include <bits/stdc++.h>
using namespace std;
 
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
 
typedef long long ll;
 
int main() { _
    int n, p, k;
    cin >> n >> p >> k;
 
    k++;
    int ganso = p;
    
    while (k--) {
        ganso++;
        if (ganso > n) {
            ganso = 1;
        }
        if (ganso == p) {
            ganso++;
            if (ganso > n) {
                ganso = 1;
            }
        }
    }
 
    cout << ganso << endl;
 
	return 0;
}