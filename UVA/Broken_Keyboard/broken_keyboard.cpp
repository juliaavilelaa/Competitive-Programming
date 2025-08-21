#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define pb push_back
#define all(x) x.begin(), x.end()

typedef long long ll;

int main() { _
    string s, casa, final;
    bool home, end;

    while (cin >> s) {
        home = false;
        vector<string> casas;
        casa = "", final = "";

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '[' && home) {
                casas.pb(casa);
                casa = "";
            }
            else if (s[i] == '[') home = true;
            else if (s[i] == ']') {
                casas.pb(casa);
                casa = "";
                home = false;
            }
            else if (home && s[i] != '[' && s[i] != ']') casa += s[i];
            else if (s[i] != '[' && s[i] != ']') final += s[i];
        }
        casas.pb(casa);
        
        for (int i = casas.size()-1; i >= 0; i--) {
            cout << casas[i];
        }
        cout << final << endl;
    }   
	
	exit(0);
}	