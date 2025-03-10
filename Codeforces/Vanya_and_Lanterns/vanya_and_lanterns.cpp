#include <bits/stdc++.h>
using namespace std;

#define pb push_back

vector<double> lanterns;

int main() {
    int n, l;
    double curr, pos, d = 0, maior = 0;

    cin >> n >> l;
    
    for (int i = 0; i < n; i++) {
        cin >> pos; 
        lanterns.pb(pos);
    }
    sort(lanterns.begin(), lanterns.end());

    for (int i = 0; i < n - 1; i++) {
        curr = lanterns[i + 1] - lanterns[i];
        if (curr > d) {
            d = curr;
        }
    }
    maior = d/2;
        
    if (lanterns[0] != 0) {
        curr = lanterns[0];
        if (curr > maior) {
            maior = curr;
        }
    }

    if (lanterns[n - 1] != l) {
        curr = l - lanterns[n - 1];
        if (curr > maior) {
            maior = curr;
        } 
    }

    cout << fixed << setprecision(10) << maior << endl;
    return 0;
}