#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

typedef long long ll;

int main() { _
    string s, a, b;
    cin >> s;

    a = "";
    b = "";
    for (int i = 0; i < s.size(); i++) {
        if (i % 2 == 0) {
            a += s[i];
        } else {
            b += s[i];
        }
    }

    cout << a << endl << b << endl;

	return 0;
}