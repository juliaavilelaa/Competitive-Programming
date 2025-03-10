#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl "\n"

int main() { _
    int P;
    cin >> P;
    
    while (P--) {
        string s, p = "";
        cin >> s;
        set<char> st;
        for (int i = 0; i < s.size(); i++) {
            char c = tolower(s[i]);
            p += c;
            st.insert(c);
        }
        bool r = true;
        if (st.size() != p.size()) {
            r = false;
        } else {
            int i = 0;
            for (auto c : st) {
                if (c != p[i]) {
                    r = false;
                    break;
                }
                i++;
            }
        }
        if (r) {
            cout << s << ": O" << endl;
        } else {
            cout << s << ": N" << endl;
        }
    }
    exit(0);
}