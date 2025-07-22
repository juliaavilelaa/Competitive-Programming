#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

typedef long long ll;

int main() { _
    int n; 
    cin >> n;
    
    while (n--) {
        string s;
        cin >> s;

        if (s.size() <= 10) {
            cout << 'N' << endl;
            continue;
        }
        
        bool letra = false, num = false, dec = false;
        char prevN = '0', prevL = 'a';

        for (int i = 0; i < s.size(); i++) {
            // letra
            if (s[i] >= 'a' && s[i] <= 'z') {
                if (prevL > s[i]) {
                    dec = true;
                    break;
                }
                letra = true;
                prevL = s[i];
            } 
            // número
            else if (s[i] >= '0' && s[i] <= '9') {
                if (letra || prevN > s[i]) {
                    dec = true;
                    break;
                }
                num = true;
                prevN = s[i];
            }
        } 

        if (!letra || !num || dec) {
            cout << 'N' << endl;
        } else {
            cout << 'S' << endl;
        }
    }

	exit(0);
}