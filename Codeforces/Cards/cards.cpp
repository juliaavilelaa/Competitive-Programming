#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define _ ios_base::sync_with_stdio(0); cin.tie(0);

int main() { _
    int n;
    string s;
    map<char, int> count;

    cin >> n >> s;

    for (int i = 0; i < n; i++) {
        count[s[i]]++;
    }
    
    for (int i = 0; i < count['n']; i++) {
        cout << 1 << " ";
    }
    for (int i = 0; i < count['z']; i++) {
        cout << 0 << " ";
    }
    cout << endl;

    exit(0);
}